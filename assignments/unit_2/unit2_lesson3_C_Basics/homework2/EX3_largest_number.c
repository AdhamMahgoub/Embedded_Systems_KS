/*          EX3: Program to Find the Largest Number Among Three Numbers       */

#include <stdio.h>
#include <stdlib.h>



int main()
{
    float a,b,c;

    printf("Enter three numbers: ");

    scanf("%f%f%f",&a,&b,&c);               //  scanning the 3 numbers 

    if (a>b && a>c)
        printf("Largest number = %.2f",a);  //  a is largest 

    else if (b>a && b>c)
        printf("Largest number = %.2f",b);  //  b is largest 

    else if (c>a && c>b)
        printf("Largest number = %.2f",c);  //  c is largest 
}
