//	######## Note: THIS CODE IS DONE BY ME : YOU CAN FIND THE ORIGINAL IN THE LESSON (1) SLIDES "TOGGLE LED" 	######## //


#include <stdint.h>

typedef volatile unsigned int vuint32_t;

/*			GPIOA Module			*/
#define GPIOA_Module_Base_Address		0x40010800
#define GPIO_CRH_Register_Offset		0x04
#define GPIO_ODR_Register_Offset		0x0C

#define CRH_Register *((volatile unsigned int*)(GPIOA_Module_Base_Address + GPIO_CRH_Register_Offset))
#define ODR_Register *((volatile unsigned int*)(GPIOA_Module_Base_Address + GPIO_ODR_Register_Offset))



/*			RCC Module				*/
#define RCC_Module_Base_Address			0x40021000
#define APB2ENR_Register_Offset 		0x18

#define APB2ENR_Register *((volatile unsigned int*)(RCC_Module_Base_Address + APB2ENR_Register_Offset))




typedef union
{
	unsigned int ALL_ports;
	struct
	{
		unsigned int PORTA:8;
		unsigned int PORTB:8;
		unsigned int PORTC:8;
		unsigned int PORTD:8;
	}S_PORTS;

	struct
	{
		unsigned char pin0:1;
		unsigned char pin1:1;
		unsigned char pin2:1;
		unsigned char pin3:1;
		unsigned char pin4:1;
		unsigned char pin5:1;
		unsigned char pin6:1;
		unsigned char pin7:1;
		unsigned char pin8:1;
		unsigned char pin9:1;
		unsigned char pin10:1;
		unsigned char pin11:1;
		unsigned char pin12:1;
		unsigned char pin13:1;
		unsigned char pin14:1;
		unsigned char pin15:1;
		unsigned char pin16:1;
		unsigned char pin17:1;
		unsigned char pin18:1;
		unsigned char pin19:1;
		unsigned char pin20:1;
		unsigned char pin21:1;
		unsigned char pin22:1;
		unsigned char pin23:1;
		unsigned char pin24:1;
		unsigned char pin25:1;
		unsigned char pin26:1;
		unsigned char pin27:1;
		unsigned char pin28:1;
		unsigned char pin29:1;
		unsigned char pin30:1;
		unsigned char pin31:1;
	}S_32_bit;


}U_union;


volatile U_union* PTR_APB2ENR = (volatile U_union*)(RCC_Module_Base_Address + APB2ENR_Register_Offset);	// Pointer to Union


volatile U_union* PTR_GPIO_ODR = (volatile U_union*)(GPIOA_Module_Base_Address + GPIO_ODR_Register_Offset);	// Pointer to Union // points to the address of register ODR register
volatile U_union* PTR_GPIO_CRH = (volatile U_union*)(GPIOA_Module_Base_Address + GPIO_CRH_Register_Offset);

int main(void)
{
	// write (1) on Register APB2ENR pin 2
	//APB2ENR_Register = 1<<2;
	PTR_APB2ENR->S_32_bit.pin2 = 1;


	//write (0010) on Register CRH pins (20 - 24)
	CRH_Register &= 0xFF0FFFFF;
	CRH_Register |= 0x00200000;


	int i = 0;

	while(1)
	{
		// write (1) and (0) “toggle” on Register GPIO_ODR pin 13
		for (i=0; i<50000; i++);
		//ODR_Register = 1<<13;
		PTR_GPIO_ODR->S_32_bit.pin13 = 1;


		for (i=0; i<50000; i++);
		//ODR_Register = 0<<13;
		PTR_GPIO_ODR->S_32_bit.pin13 = 0;
	}


	return 0;
}
