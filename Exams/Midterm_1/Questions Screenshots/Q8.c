#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define array_size 5

void reverse (int arr[])
{
    int i; 

    for (i=array_size-1; i>=0; i--)
        printf("%d ",arr[i]); 
}


int main(void)
{
    int arr[array_size] = {1,2,3,4,5};
    reverse(arr);

    return 0;
}