#include <stdio.h>
#include <stdlib.h>



int main()
{
    int x[3][3] = {
    {0,1,2},
    {3,4,5},
    {6,7,8}
    };


    int i,j;
    for (i=0; i<3; i++)
    {
        for (j=0; j<3; j++)
        {
            printf("%d ",x[j][i]);
        }
        printf("\n");
    }
}
