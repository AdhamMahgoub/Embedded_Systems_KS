/*      Lab:Calculate Polynomial Value for a Set of Inputs       */

#include <stdio.h>
#include <stdlib.h>



int main()
{
    float x[5] = {5,16,22,3.5,15};
    float y;

    int i;
    for (i=0; i<5; i++)
    {
        //printf("y (%.1f) = 5* %.1f* %.1f + 3 * %.1f+ 2 = %.2f \n", x[i], x[i],x[i],x[i], 5 * x[i] * x[i] + 3 * x[i] + 2);
        y = 5 * x[i] * x[i] + 3 * x[i] + 2;
        printf("y (%.1f) = %.1f \n", x[i], y);
    }
}
