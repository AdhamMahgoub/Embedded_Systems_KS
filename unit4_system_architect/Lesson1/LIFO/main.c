#include <stdio.h>
#include <stdlib.h>	// Mandatory for Malloc


#include "LIFO.h"





int main()
{

	printf("*************Static Allocation*************\n");
	// UART
	unsigned int uart_buffer[5]; 		//	Buffer
	LIFO_Buf_t uart_lifo_struct;		//	Buffer Struct

	/*	LIFO init	*/
	LIFO_init(&uart_lifo_struct, uart_buffer, 5);

	/*	LIFO add	*/
	LIFO_Add_Item(&uart_lifo_struct, 1);
	LIFO_Add_Item(&uart_lifo_struct, 2);
	LIFO_Add_Item(&uart_lifo_struct, 3);
	LIFO_Add_Item(&uart_lifo_struct, 4);
	LIFO_Add_Item(&uart_lifo_struct, 5);
	LIFO_Add_Item(&uart_lifo_struct, 6);	// Won't be added -- LIFO_full

	/*	LIFO print	*/
	LIFO_Print(&uart_lifo_struct);

	/*	LIFO get value	*/
	int uart_lifo_value_to_get;	// Value will change using pointer
	LIFO_Get_Item(&uart_lifo_struct, &uart_lifo_value_to_get);
	LIFO_Get_Item(&uart_lifo_struct, &uart_lifo_value_to_get);

	/*	LIFO print	*/
	LIFO_Print(&uart_lifo_struct);







	printf("*************Dynamic Allocation*************\n");
	// I2C
	unsigned int* i2c_buffer = malloc(5*sizeof(unsigned int)); 	//	Buffer (20 bytes)
	LIFO_Buf_t i2c_lifo_struct;				//	Buffer Struct

	/*	LIFO init	*/
	LIFO_init(&i2c_lifo_struct, i2c_buffer, 5);

	/*	LIFO add	*/
	LIFO_Add_Item(&i2c_lifo_struct, 100);
	LIFO_Add_Item(&i2c_lifo_struct, 200);
	LIFO_Add_Item(&i2c_lifo_struct, 300);


	/*	LIFO print	*/
	LIFO_Print(&i2c_lifo_struct);

	/*	LIFO get value	*/
	int i2c_lifo_value_to_get;	// Value will change using pointer
	LIFO_Get_Item(&i2c_lifo_struct, &i2c_lifo_value_to_get);


	/*	LIFO print	*/
	LIFO_Print(&i2c_lifo_struct);

	/*	Free the Dynamic Memory	*/
	free(i2c_buffer);
	i2c_buffer = 0;
	printf("freed I2C buffer = %x ", i2c_buffer);



	return 0;
}
