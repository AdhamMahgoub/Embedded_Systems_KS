#include <stdio.h>
#include <stdlib.h>



int main()
{
    float degree[10];

    /*  scan 10 student degrees     */
    int i;
    for (i=0; i<10; i++)
        scanf("%f",&degree[i]);

    /*  print the 10 student degrees */
    for (i=0; i<10; i++)
        printf("%.2f\n",degree[i]);
}
