#define SYSCTL_RCGC2_R       (*((volatile unsigned long *)0x400FE108))
#define GPIO_PORTF_DATA_R    (*((volatile unsigned long *)0x400253FC))
#define GPIO_PORTF_DIR_R     (*((volatile unsigned long *)0x40025400))
#define GPIO_PORTF_DEN_R     (*((volatile unsigned long *)0x4002551C))

int global_initialized_data = 5;
double global_uninitialized_bss; 


int main(void)
{
    volatile unsigned long delay_count;
    SYSCTL_RCGC2_R = 0x00000020;               // Enable clock to Port F
    for (delay_count = 0; delay_count < 200; delay_count++); // Delay for clock to stabilize

    GPIO_PORTF_DIR_R |= 1 << 3;                // Set PF3 as output
    GPIO_PORTF_DEN_R |= 1 << 3;                // Enable digital function on PF3

    while (1)
    {
        GPIO_PORTF_DATA_R |= 1 << 3;           // Set PF3
        for (delay_count = 0; delay_count < 200000; delay_count++); // Delay

        GPIO_PORTF_DATA_R &= ~(1 << 3);        // Clear PF3
        for (delay_count = 0; delay_count < 200000; delay_count++); // Delay
    }

    return 0;
}