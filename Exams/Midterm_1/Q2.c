#include <stdio.h>
#include <stdbool.h>
#include <math.h>

float square_root(int n)
{
    float result = sqrt(n); 
   
    return result; 
}

int main()
{
    
    int number;
    scanf("%d",&number);

    printf("Square root of %d is %.3f",number, square_root(number));

    return 0;
}
