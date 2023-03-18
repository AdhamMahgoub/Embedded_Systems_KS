#include <stdio.h>
#include <stdbool.h>


int sum_digits(int n)
{
    int sum = 0;
    
    while(n != 0)
    {
        sum += n%10; 
        n /= 10;
    }
    return sum; 
}

int main()
{
    
    int number;
    scanf("%d",&number);

    printf("Sum of %d is %d",number, sum_digits(number));

    return 0;
}
