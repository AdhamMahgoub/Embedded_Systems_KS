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

	//struct student s = {"Adham", 15, 20.0};		//	Inserting them manually
	struct student s; 

	/*	scanning the data	*/
	printf("Enter information of students\n\n");

	printf("Enter name: ");
	gets(s.name);
	printf("Enter roll number: ");
	scanf("%d", &s.roll);
	printf("Enter marks: ");
	scanf("%f", &s.marks);


	/*	Printing the entered data	*/
	printf("\n\nDisplaying Information\n");
	printf("Name = %s\n",s.name);
	printf("roll = %d\n",s.roll);
	printf("marks = %.2f\n",s.marks);

	return 0;
}