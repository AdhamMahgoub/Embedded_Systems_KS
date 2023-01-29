#include <stdio.h>
#include <stdlib.h>



int main()
{
    float degree[10];

    /*  scan 10 student degrees     */
    int i;
    for (i=0; i<10; i++)
    {
        printf("Enter student %d degree: ",i+1);
        scanf("%f",&degree[i]);
    }
    
    printf("\n\n");

    /*  print the 10 student degrees */
    for (i=0; i<10; i++)
        printf("Student %d degree is %.2f\n",i+1, degree[i]);
}
