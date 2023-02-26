#include <stdio.h>
#include <stdlib.h>

int factorial (int n)
{
    int result = 1; 

    while (n!=0)
    {
        result *= n; 
        n--; 
    }
    
    return result; 
}


int main(void)
{
    
    printf("result = %d",factorial(3));

    return 0; 
}