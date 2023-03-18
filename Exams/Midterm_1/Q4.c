#include <stdio.h>
#include <stdlib.h>


void reverse_digits(int n)
{
    while (n!=0)
    {
        printf("%d",n%10);
        n/=10;
    }
}


int main(void)
{
	int n; 
    scanf("%d",&n);
    reverse_digits(n);

	return 0;
}