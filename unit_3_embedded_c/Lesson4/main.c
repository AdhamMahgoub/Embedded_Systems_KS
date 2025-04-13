#define SYSCTL_RCGC2_R       (*((volatile unsigned long *)0x400FE108))
// #define GPIO_PORTF_DATA_R    (*((volatile unsigned long *)0x400253FC))
#define GPIO_PORTF_DIR_R     (*((volatile unsigned long *)0x40025400))
#define GPIO_PORTF_DEN_R     (*((volatile unsigned long *)0x4002551C))

int global_initialized_data = 5;
double global_uninitialized_bss; 


volatile unsigned long* GPIO_PORTF_DATA_R = (volatile unsigned long *)0x400253FC;


int main(void)
{



	unsigned long arr_disrupt [245]; // stored in stack
    volatile unsigned long delay_count;
    SYSCTL_RCGC2_R = 0x00000020;               // Enable clock to Port F
    for (delay_count = 0; delay_count < 200; delay_count++); // Delay for clock to stabilize

    GPIO_PORTF_DIR_R |= 1 << 3;                // Set PF3 as output
    GPIO_PORTF_DEN_R |= 1 << 3;                // Enable digital function on PF3

    while (1)
    {
        *GPIO_PORTF_DATA_R |= 1 << 3;           // Set PF3
        for (delay_count = 0; delay_count < 200000; delay_count++); // Delay

        *GPIO_PORTF_DATA_R &= ~(1 << 3);        // Clear PF3
        for (delay_count = 0; delay_count < 200000; delay_count++); // Delay
		
		for (volatile int i = 0; i < 245; i++) 
		{
			arr_disrupt[i] = i * 10; // or any other logic you want
		}
	
	}

    return 0;
}