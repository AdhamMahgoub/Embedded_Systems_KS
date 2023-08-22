/*          EX5: C Program to Check Whether a Character is an Alphabet or not       */

#include <stdio.h>
#include <stdlib.h>



int main()
{
    char x;
    printf("Enter a character: ");
    scanf("%c",&x);                                      // scanning character 

    if ((x>=65 && x<=90) || (x>=97 && x<=122) )         //  checking if it lies in the ASCII range  
        printf("%c is an alphabet",x);

    else
        printf("%c is not an alphabet",x);



}
