/*      HW Arrays: EX3: C Program to Find Transpose of a Matrix	   */


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	/*	These are written once instead of fflush()	*/
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);


	/*	scan number of rows and columns */
	int rows, columns;
	printf("Enter rows and column of matrix: ");
	scanf("%d %d",&rows, &columns);

	/*	scan elements of matrix		*/
	int arr_1[10][10];
	int i,j;
	printf("Enter elements of matrix: ");
	for(i=0; i<rows; i++)
	{
		for (j=0; j<columns; j++)
		{
			printf("Enter element a%d%d: ",i+1,j+1);
			scanf("%d",&arr_1[i][j]);
		}
	}

	/*	print the entered matrix	*/
	printf("Entered Matrix: \n");
	for(i=0; i<rows; i++)
	{
		for (j=0; j<columns; j++)
		{
			printf("%d ",arr_1[i][j]);
		}
		printf("\n");
	}


	/*	transpose of matrix			*/
	printf("Transpose of Matrix: \n");
	for(j=0; j<columns; j++)
	{
		for (i=0; i<rows; i++)
		{
			printf("%d ",arr_1[i][j]);
		}
		printf("\n");
	}



}
