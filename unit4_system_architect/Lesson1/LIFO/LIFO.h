#ifndef LIFO_H_
#define LIFO_H_

//	type definitions
typedef struct LIFO_Buf
{
	unsigned int length;
	unsigned int count;
	unsigned int* base;		//	Pointer
	unsigned int* head;		//	Pointer
}LIFO_Buf_t;

typedef enum
{
	LIFO_no_error, //0
	LIFO_full,
	LIFO_empty,
	LIFO_null
}LIFO_Status;


//	APIs
LIFO_Status LIFO_init(LIFO_Buf_t* lifo_buf , unsigned int* buf, unsigned int size);
LIFO_Status LIFO_Add_Item(LIFO_Buf_t* lifo_buf , unsigned int item);
LIFO_Status LIFO_Get_Item(LIFO_Buf_t* lifo_buf , unsigned int* item);
LIFO_Status LIFO_Print(LIFO_Buf_t* ptr_to_lifo_buffer_struct);





#endif
