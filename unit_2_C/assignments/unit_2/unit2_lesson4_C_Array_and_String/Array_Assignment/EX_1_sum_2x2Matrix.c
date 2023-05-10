/*      HW Arrays: EX1: Example of Multidimensional Array in C (sum of 2x2 matrices)   */


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	/*	These are written once instead of fflush()	*/
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	/*	***********************Array_1****************************************	*/
	/*  Declaration and Definition 2D Array_1 */
	float Array_1[2][2];

	/*  Scan the values of Array_1*/
	printf("Enter the elements of 1st matrix\n");
	int i,j;
	for (i=0; i<2; i++)
	{
		for (j=0; j<2;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			scanf("%f",&Array_1[i][j]);
		}
	}

	/*		Print Array_1		*/

	printf("Array_1 = \n");
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("%f ",Array_1[i][j]);
		}
		printf("\n");
	}

/*	***********************Array_2****************************************	*/
	/*  Declaration and Definition 2D Array_2 */
	float Array_2[2][2];
	printf("\nEnter the elements of 2nd matrix\n");
	/*  Scan the values of Array_2*/
	for (i=0; i<2; i++)
	{
		for (j=0; j<2;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			scanf("%f",&Array_2[i][j]);
		}
	}


	/*		Print Array_2		*/
	printf("Array_2 = \n");
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("%f ",Array_2[i][j]);
		}
		printf("\n");
	}




	/*  Print the Sum   */
	printf("\n the sum is: \n");
	for (i=0; i<2; i++)
	{
		for (j=0; j<2; j++)
		{
			printf("%.1f ",Array_1[i][j] + Array_2[i][j]);
		}
		printf("\n");
	}

}
