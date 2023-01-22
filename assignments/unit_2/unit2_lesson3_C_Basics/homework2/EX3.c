/*          EX3: Program to Find the Largest Number Among Three Numbers       */

#include <stdio.h>
#include <stdlib.h>



int main()
{
    float a,b,c;

    printf("Enter three numbers: ");

    scanf("%f%f%f",&a,&b,&c);

    if (a>b && a>c)
        printf("Largest number = %.2f",a);

    else if (b>a && b>c)
        printf("Largest number = %.2f",b);

    else if (c>a && c>b)
        printf("Largest number = %.2f",c);
}
