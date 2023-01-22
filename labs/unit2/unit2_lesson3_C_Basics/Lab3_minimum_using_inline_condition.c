/*      Lab3: Minimum of 2 numbers (using inline condition) */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int x,y;
    printf("Enter two numbers: ");

    scanf("%d%d",&x,&y);

    int min = (x<y)? x:y;

    printf("The minimum is %d",min);
}
