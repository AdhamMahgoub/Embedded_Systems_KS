#include <stdio.h>
#include <stdlib.h>


int ones(int n)
{
    int counter = 0; 

    while (n!=0)
    {
        if( (n&1) == 1)
            counter++;
        n = n>>1; 
    }
    

    return counter; 
}


int main(void)
{
	int n; 
    scanf("%d",&n);
    
    printf("the number of ones in %d is %d",n, ones(n));

	return 0;
}