#include <stdio.h>

int main()
{
	int arr[5] = {1,2,3,4,5};

	int *ptr = arr;

	int i, sum=0;
	for (i=0; i<5; i++)
	{
		sum += *ptr;
		ptr++;
	}

	printf("Sum = %d",sum);


	return 0;
}
