#include <stdio.h>
#include <stdlib.h>

struct student
{
	char name[50];
	int roll;
	float marks;
};

int main(void)
{
	struct student s[2];	//	for ease of testing

	/*	scanning the data	*/
	printf("Enter information of students\n\n");
	int i;
	for (i = 0; i < 2; i++)
	{
		printf("For roll number %d\n",i+1);
		printf("Enter name: ");
		scanf("%s",s[i].name);
		s[i].roll = i+1;
		printf("Enter marks: ");
		scanf("%f", &s[i].marks);
		printf("\n");
	}

	/*	Printing the entered data	*/
	printf("\n\nDisplaying Information of student\n\n");
	for (i = 0; i < 2; i++)
	{
		printf("Information for roll number %d: \n",i+1);
		printf("Name = %s\n", s[i].name);
		printf("roll = %d\n", s[i].roll);
		printf("marks = %.0f\n", s[i].marks);
		printf("\n\n");
	}

	return 0;
}