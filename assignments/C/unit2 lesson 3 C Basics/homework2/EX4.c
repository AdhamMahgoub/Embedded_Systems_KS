#include <stdio.h>
#include <stdlib.h>



int main()
{
    float a;

    printf("Enter a number: ");

    scanf("%f",&a);

    if (a>0)
        printf("%.2f is positive",a);

    else if (a<0)
        printf("%.2f is negative",a);

    else if (a==0)
        printf("You entered zero.");
}
