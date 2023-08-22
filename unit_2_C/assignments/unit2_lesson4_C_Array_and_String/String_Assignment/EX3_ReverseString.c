/*      HW Strings: EX3: C Program to Reverse String Withotu Using Library Function 	*/


#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	/*	These are written once instead of fflush()	*/
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char arr_1[100];

	/*	Scan String	*/
	printf("Enter a string: ");
	gets(arr_1); 		//	used gets to be able to read spaces

	/*	Calculate Lenght of arr_1	*/
	int arr_1_length = strlen(arr_1);


	/*	Reverse the String */
	char arr_reversed[100];
	int i;
	for (i=0; i<arr_1_length; i++)
	{
		arr_reversed[arr_1_length-1-i] = arr_1[i];
	}
	arr_reversed[arr_1_length]=0;	//	putting 0 at the end of the array (null terminator)

	printf("Reverse string is : %s",arr_reversed);




}
