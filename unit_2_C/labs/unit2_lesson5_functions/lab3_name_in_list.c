#include <stdio.h>
#include <string.h>

int findName(char names[][14], int n, char name[])
{
	int i = 0;

	for (i=0; i<n; i++)
	{
		if (strcmp (names[i], name) == 0)
		{
			return 1;
			break;
		}
	}
	return 0;
}


int main()
{

	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);

	char name [14];
	char names [5][14] = {"Alaa", "Ossama", "Mamdouh","Samy","Hossain"};

	printf("Enter your first name: ");
	gets(name);

	if (findName(names, 5, name) == 1)
		printf("Welcome");
	else
		printf("your name is not in the list");


	return 0;
}
