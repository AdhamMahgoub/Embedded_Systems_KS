#include "uart.h"

//	uart registers
#define UART0DR *((volatile unsigned int* const)((unsigned int*)(0x101f1000)))

void UART_Send_String(unsigned char *P_tx_string)
{
	while (*P_tx_string != '\0')
	{
		/*	Loop until end of string	*/
		UART0DR = (unsigned int)(*P_tx_string); /*	Transmit char	*/
		P_tx_string++;	/*	Next char	*/
	}
}
