#include <stdio.h>


int main()
{

	int arr[26];

	int i;
	for (i=0; i<26; i++)
		arr[i] = 65+i;

	int* ptr = arr;
	for (i=0; i<26; i++)
	{
		printf("%c ",*(ptr+i));
	}



 	return 0;
}
