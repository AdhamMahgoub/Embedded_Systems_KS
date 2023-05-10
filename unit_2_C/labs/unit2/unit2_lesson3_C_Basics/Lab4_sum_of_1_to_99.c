/*      Lab4: Summation of values from 1 to 99  */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int sum = 0;
    int i;

    for (i=1; i<=99; i++)
    {
        sum += i;
    }

    printf("Summation of Values between (1 and 99) is: %d",sum);
}
