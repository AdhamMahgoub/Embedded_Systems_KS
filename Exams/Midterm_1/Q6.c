#include <stdio.h>
#include <stdlib.h>

#define Array_size 7

int unique(int arr[])
{
    int i;
    int frequency_of_each_number[100] = {0}; //   to store the frequency of numbers from 0 - 99 (assuming max number to be entered is 99)

    for (i = 0; i < Array_size; i++)
    {
        frequency_of_each_number[arr[i]]++;
    }

    for (i = 0; i < 100; i++)
    {
        if (frequency_of_each_number[i] == 1)
            return i;
    }
}

int main(void)
{
    int arr[Array_size] ={4,2,5,2,5,7,4};

    printf("the unique number in the array is %d", unique(arr));

    return 0;
}