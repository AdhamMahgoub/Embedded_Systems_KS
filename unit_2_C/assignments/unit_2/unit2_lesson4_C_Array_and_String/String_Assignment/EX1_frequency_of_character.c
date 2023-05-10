/*      HW Strings: EX1: C Program to Find the Frequency of Characters in a String 	*/


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

	/*	Scan character to find it's frequency */
	char x;
	printf("Enter a character to find frequency: ");
	scanf("%c",&x); //	I can use scan to scan characters (instead of gets)

	/*	Calculate the Frequency 	*/
	int i;
	int count=0;
	for (i=0; i<strlen(arr); i++)
	{
		if(arr[i]==x)
			count++;
	}
	printf("Frequency of %c = %d",x,count);





}
