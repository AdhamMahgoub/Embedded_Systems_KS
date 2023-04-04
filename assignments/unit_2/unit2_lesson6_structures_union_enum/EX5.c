#include <stdio.h>
#define area(radius) (3.14 * radius * radius)

int main()
{
	float radius;

	printf("Enter the radius of the circle: ");
	scanf("%f", &radius);

	printf("The area of the circle is %.2f\n", area(radius));

	return 0;
}