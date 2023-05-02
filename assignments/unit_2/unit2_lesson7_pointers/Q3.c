#include <stdio.h>
#include <string.h>


int main()
{
	/*	These are written once instead of fflush()	*/
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char arr_string[100];

	printf("Input a string : ");
	//gets(arr_string);
	strcpy(arr_string, "Adham Mahgoub");

	printf("Reverse of the string is : ");
	int length_string = strlen(arr_string);
	char* ptr = arr_string + length_string - 1;
	int i;
	for (i=0; i<length_string; i++)
	{
		printf("%c",*ptr);
		ptr--;
	}


 	return 0;
}
