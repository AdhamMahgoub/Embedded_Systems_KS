#include <stdint.h>

/*	RCC Module		*/
#define RCC_Module_Base_Address			0x40021000
#define APB2ENR_Register_Offset 		0x18
#define APB2ENR_Register *((volatile unsigned int*)(RCC_Module_Base_Address + APB2ENR_Register_Offset))


/*	GPIOA Module	*/
#define GPIOA_PA_Module_Base_Address	0x40010800
#define CRH_Register_Offset				0x04
#define ODR_Register_Offset				0x0C

#define CRH_Register *((volatile unsigned int*)(GPIOA_PA_Module_Base_Address + CRH_Register_Offset))
#define ODR_Register *((volatile unsigned int*)(GPIOA_PA_Module_Base_Address + ODR_Register_Offset))

typedef union
{
	volatile unsigned int whole_register;
	struct
	{
		volatile unsigned int Reserved: 13; // bit 0-12 not used
		volatile unsigned int bit13: 1;     // bit 13 (index 14)
	}register_bits;

}access_any_register_t;

// Pointer to Union // Pointer to Union points to the address of register ODR
volatile access_any_register_t* pointer_to_union = (volatile access_any_register_t*)(GPIOA_PA_Module_Base_Address + ODR_Register_Offset);


int main(void)
{
	// write (1) on Register APB2ENR pin 2
	APB2ENR_Register = 1<<2;


	//write (0010) on Register CRH pins (20 - 24)
	CRH_Register &= 0xFF0FFFFF;
	CRH_Register |= 0x00200000;


	int i = 0;

	while(1)
	{
		// write (1) and (0) “toggle” on Register GPIO_ODR pin 13
		for (i=0; i<50000; i++);
		//ODR_Register = 1<<13;
		pointer_to_union->register_bits.bit13 = 1;


		for (i=0; i<50000; i++);
		//ODR_Register = 0<<13;
		pointer_to_union->register_bits.bit13 = 0;
	}


	return 0;
}
