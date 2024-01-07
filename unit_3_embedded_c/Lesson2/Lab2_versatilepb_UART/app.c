#include "uart.h"

unsigned char string_buffer[100] = "learn-in-depth: Adham" ;
const int x = 3; //	To Generate Rodata Section

int y; // .bss

void main(void)
{
	//	VersatilePB physical board
	UART_Send_String(string_buffer);
}