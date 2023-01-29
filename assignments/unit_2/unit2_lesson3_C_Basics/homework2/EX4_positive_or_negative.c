/*          EX4: C Program to Check Whether a Number is Positive or Negative       */


#include <stdio.h>
#include <stdlib.h>



int main()
{
    float a;

    printf("Enter a number: ");         

    scanf("%f",&a);                     //  scanning number 

    if (a>0)
        printf("%.2f is positive",a);   //  positive number 

    else if (a<0)
        printf("%.2f is negative",a);   // negative number 

    else if (a==0)
        printf("You entered zero.");    // zero 
}
