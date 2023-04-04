#include <stdio.h>
#include <stdlib.h>

struct measurements
{
	float feet; 
	float inch;  
};

int main(void)
{

	struct measurements x1, x2, sum; 

	printf("Enter information for 1st distance\n");
	printf("Enter feet: ");
	scanf("%f",&x1.feet);
	printf("Enter inch: ");
	scanf("%f",&x1.inch);

	printf("\nEnter information for 2nd distance\n");
	printf("Enter feet: ");
	scanf("%f",&x2.feet);
	printf("Enter inch: ");
	scanf("%f",&x2.inch);

	sum.feet = x1.feet + x2.feet; 
	sum.inch = x1.inch + x2.inch;

	if (sum.inch>12)
	{
		sum.feet++; 
		sum.inch -= 12; 
	}

	printf("Sum of distances=%.0f'-%.1f\"",sum.feet,sum.inch);

	return 0;
}