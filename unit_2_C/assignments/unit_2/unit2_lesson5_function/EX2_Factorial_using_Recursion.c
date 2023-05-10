#include <stdio.h>
#include <stdlib.h>

int factorial_global = 1; 

int fact(int n)
{
    factorial_global *= n;
    if (n>1) 
        fact(n-1); 
    if (n==1)
        return factorial_global;
}

int main()
{
    int n = 3; 
    printf("Enter a positive number: ");
    scanf("%d",&n);
    printf("Factorial = %d",fact(n));

    return 0;
}
