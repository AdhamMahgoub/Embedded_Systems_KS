#include <stdio.h>
#include <stdlib.h>

struct complex
{
	float real; 
	float imag; 
};

void complex_sum (struct complex n1, struct complex n2)
{
	struct complex result;
	result.real = n1.real + n2.real; 
	result.imag = n1.imag + n2.imag;

	printf("Sum = %.1f+%.1fi",result.real,result.imag);
}

int main(void)
{
	struct complex n1,n2; 

	printf("For 1st complex number\n");
	printf("Enter real and imaginary respectively: ");
	scanf("%f %f",&n1.real,&n1.imag);

	printf("\nFor 2nd complex number\n");
	printf("Enter real and imaginary respectively: ");
	scanf("%f %f",&n2.real,&n2.imag);

	complex_sum(n1,n2);
	

	return 0;
}