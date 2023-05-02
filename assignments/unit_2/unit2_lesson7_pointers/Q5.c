#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[100];
	int id;
}Employee; // Warning: Datatype: Employee


int main()
{

	Employee SEmployee1 = {"Adham Mahgoub", 1002};
	Employee SEmployee2 = {"Ahmed Hossam", 1003};

	/*	Array of Pointer to Struct	*/
	Employee* ptr_to_struct_array[2] = {&SEmployee1, &SEmployee2};

	/*	Pointer to Previous Array	*/
	/*	Points to the whole Array	*/
	/*	Pointer to Array that contains 2 elements of the type Pointer to Struct	*/
	Employee*  (*ptr_to_array)[2] = &ptr_to_struct_array;

	/*
	 * 					ptr_to_array = base address of of array -- this is pointer to array
	 * 					*ptr_to_array = base address of of array (== array name) -- now this becomes pointer to int
	 * 					*(ptr_to_array + i) = address of the ith element in the array
	 * 					*(*(ptr_to_array + i)) = value of the ith element in the array (which is the pointer to struct)
	 */


	int i;
	for (i=0; i<2; i++)
	{
		printf("Employee %d\n",i+1);
		printf("id = %d\n", (*(*ptr_to_array+i))->id); // Note: lazem bracket barra 5ales
		printf("name = %s\n",(*(*ptr_to_array+i))->name);
		
		printf("\n");
	}







	return 0;
}
