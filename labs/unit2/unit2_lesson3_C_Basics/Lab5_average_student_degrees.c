/*      Lab5: Average Student Degrees  */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n;
    printf("Enter the number of the students: ");
    scanf("%d",&n);

    float sum = 0;
    float degree;
    int i;
    for (i=0; i<n; i++)
    {
        printf("Enter student (%d) degree: ",i+1);
        scanf("%f",&degree);
        sum += degree;
    }


    printf("Average students degree is : %f",sum/n);

}
