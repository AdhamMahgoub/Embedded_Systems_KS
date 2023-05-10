/*      HW Strings: EX2: C Program to Find the Length of a String 	*/


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	/*	These are written once instead of fflush()	*/
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char arr[100];

	/*	Scan String	*/
	printf("Enter a string: ");
	gets(arr); 		//	used gets to be able to read spaces

	/*	calculate length of string 	*/
	int i=0,length=0;
	while (arr[i] != 0)
	{
		length++;
		i++;
	}
	printf("Length os string: %d",length);




}
