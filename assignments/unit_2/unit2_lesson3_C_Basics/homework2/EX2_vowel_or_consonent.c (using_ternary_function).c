/*          EX2: C Program to Check Vowel or Consonant        */

#include <stdio.h>
#include <stdlib.h>



int main()
{
    char x;
    printf("Enter an alphabet: ");
    scanf("%c",&x);

    (x=='a' || x=='e' || x=='i' || x=='o')? printf("%c is a vowel" ,x):printf("%c is a consonant" ,x);
}
