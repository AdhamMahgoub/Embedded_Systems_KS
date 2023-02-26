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

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	printf("factorial of (%d) = %d",3, factorial(3));

	return 0;
}
