/*          EX7: C Program to Find Factorial of a Number       */

#include <stdio.h>
#include <stdlib.h>



int main()
{
    int n, factorial = 1,i;
    printf("Enter an integer: "); 
    scanf("%d",&n);                     //  scanning the number

    if (n<0)
        printf("Error!!! Factorial of a negative number doesn't exist. ");
    else if (n==0)
        printf("Factorial = 1");
    else
    {
        for (i=1; i<=n; i++)
            factorial *= i;

        printf("Factorial = %d",factorial);
    }




}
