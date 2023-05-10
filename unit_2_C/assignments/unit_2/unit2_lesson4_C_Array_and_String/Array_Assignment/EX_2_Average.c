/*      HW Arrays: EX2: C Program to Calculate Average Using Arrays	   */


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	/*	These are written once instead of fflush()	*/
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	/*	scan the number of elements	*/
	int n;
	printf("Enter the numbers of data: ");
	scanf("%d",&n);

	/*	scan the elements 			*/
	float arr[100];	//	size must be a fixed integer
	int i;
	for (i=0; i<n; i++)
	{
		printf("Enter number: ");
		scanf("%f",&arr[i]);
	}


	/*		calculate the sum of arr	*/
	float sum=0;
	for (i=0; i<n; i++)
		sum += arr[i];
	/*		print the average			*/
	printf("Average = %.2f", sum/n);

}
