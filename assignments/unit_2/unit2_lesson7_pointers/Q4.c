#include <stdio.h>
#include <string.h>


int main()
{
	/*	These are written once instead of fflush()	*/
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	int arr[15];
	printf("Input the number of elements to store in the array (max 15): ");
	int number_elements; scanf("%d",&number_elements);

	int i;
	for (i=0; i<number_elements; i++)
		scanf("%d",&arr[i]);


	printf("The elements of array in reverse order are: \n");
	int* ptr = arr + number_elements - 1;
	for (i=0; i<number_elements; i++, ptr--)
		printf("element - %d : %d \n",i+1, *ptr);



 	return 0;
}
