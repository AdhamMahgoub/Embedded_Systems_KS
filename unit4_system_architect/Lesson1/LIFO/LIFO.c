#include "LIFO.h"



LIFO_Status LIFO_init(LIFO_Buf_t* ptr_to_lifo_buffer_struct , unsigned int* ptr_to_buffer_address, unsigned int size)
{
	if(ptr_to_lifo_buffer_struct->base == 0 || ptr_to_lifo_buffer_struct->head == 0) // Null check
	{
		return LIFO_null;
	}

	else
	{
		ptr_to_lifo_buffer_struct->base = ptr_to_buffer_address;
		ptr_to_lifo_buffer_struct->head = ptr_to_buffer_address;
		ptr_to_lifo_buffer_struct->length = size;
		ptr_to_lifo_buffer_struct->count = 0;

		return LIFO_no_error;
	}

}


LIFO_Status LIFO_Add_Item(LIFO_Buf_t* ptr_to_lifo_buffer_struct , unsigned int item)
{
	if(ptr_to_lifo_buffer_struct->base == 0 || ptr_to_lifo_buffer_struct->head == 0) // Null check
	{
		return LIFO_null;
	}

	else if (ptr_to_lifo_buffer_struct->count == ptr_to_lifo_buffer_struct->length)
	{
		return LIFO_full;
	}

	else
	{
		*(ptr_to_lifo_buffer_struct->head) = item;
		printf("Push: %d\n",item);

		ptr_to_lifo_buffer_struct->head ++;
		ptr_to_lifo_buffer_struct->count ++;
		return LIFO_no_error;
	}
}


LIFO_Status LIFO_Get_Item(LIFO_Buf_t* ptr_to_lifo_buffer_struct , unsigned int* item)
{

	if(ptr_to_lifo_buffer_struct->base == 0 || ptr_to_lifo_buffer_struct->head == 0) // Null check
	{
		return LIFO_null;
	}

	else if (ptr_to_lifo_buffer_struct->count == 0)
	{
		return LIFO_empty;
	}

	else
	{
		ptr_to_lifo_buffer_struct->head --;
		ptr_to_lifo_buffer_struct->count--;

		unsigned int item_popped = *(ptr_to_lifo_buffer_struct->head);
		*item = item_popped;
		printf("Pop: %d\n",item_popped);

		return LIFO_no_error;
	}
}


LIFO_Status LIFO_Print(LIFO_Buf_t* ptr_to_lifo_buffer_struct)
{
	if (ptr_to_lifo_buffer_struct->count == 0)
	{
		return LIFO_empty;
	}

	else
	{
		int* ptr = ptr_to_lifo_buffer_struct->head;

		printf("\nPrinting the LIFO (Last to First) \n");
		for (int i=0; 		i<ptr_to_lifo_buffer_struct->count;	 		i++)
		{
			ptr--;
			printf("%d \n", *ptr);
		}
		printf("\n");

		return LIFO_no_error; //	should check first
	}




}
