/*           EX2: C Program to Check Vowel or Consonant        */

#include <stdio.h>
#include <stdlib.h>



int main()
{
    char x;
    printf("Enter an alphabet: ");
    scanf("%c",&x);

    /*  checking if a vowel or consonent  */

    if (x=='a' || x=='e' || x=='i' || x=='o')       //  if vowel 
        printf("%c is a vowel" ,x);

    else
        printf("%c is a consonant" ,x);             // if consonant
}
