/*          EX6: C Program to Calculate Sum of Natural Numbers       */

#include <stdio.h>
#include <stdlib.h>



int main()
{
    int n;
    printf("Enter an integer: ");
    scanf("%d",&n);

    int sum = 0;

    int i;
    for (i=1; i<=n; i++)
    {
        sum += i;       //  adding the numbers to the sum variable 
    }

    printf("Sum = %d",sum); //  printing the sum of the range



}
