#include <stdio.h>
#include <stdlib.h>


int prime_checker (int n)
{
	int i; 
	int prime = 1; 
	for (i=2; i<n; i++)
	{
		if (n%i == 0)
			prime = 0; 
	}

	return prime; 
}

void prime_numbers_in_between (int n1, int n2)
{
	printf("Prime numbers between %d and %d are: ",n1,n2);
	int i; 
	for (i=n1; i<=n2; i++)
	{
		if (prime_checker(i))
			printf("%d ",i);
	}
}


int main(void)
{
	int n1, n2; 
	printf("Enter two numbers (intervals): ");
	scanf("%d %d",&n1, &n2);

	prime_numbers_in_between(n1,n2);

	return 0;
}