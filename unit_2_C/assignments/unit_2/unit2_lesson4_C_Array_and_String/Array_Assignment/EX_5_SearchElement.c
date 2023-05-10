/*      HW Arrays: EX5: C Program to Search an element in Array	   */


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	/*	These are written once instead of fflush()	*/
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	/*			array_1 definition and declaration	*/
		int arr_1 [10];

		/*			scan number of elements 		*/
		int n;
		printf("Enter no of elements: ");
		scanf("%d",&n);

		/*	scan elements of array_1		 		*/
		int i;
		for (i=0; i<n; i++)
			scanf("%d",&arr_1[i]);

		/*	element to be searched					*/
		int element;
		printf("Enter the element to be searched: ");
		scanf("%d",&element);

		/*	finding the element index			 	*/
		for (i=0; i<n; i++)
		{
			if (arr_1[i]==element)
			{
				printf("Number found at the location = %d",i+1);
				break;
			}
		}



}
