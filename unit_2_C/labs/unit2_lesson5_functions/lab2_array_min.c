#include <stdio.h>


// Inputs: Array, number of elements
int calcMin(int values[], int n)
{
	int min = values[0];

	int i;
	for (i=0; i<n; i++)
	{
		if (values[i]<min)
			min = values[i];
	}

	return min;
}

int main()
{
	int arr[10] = {1,2,3,4,5,6,7,8,0,-1};

	printf("min = %d",calcMin(arr, 10));

	return 0;
}
