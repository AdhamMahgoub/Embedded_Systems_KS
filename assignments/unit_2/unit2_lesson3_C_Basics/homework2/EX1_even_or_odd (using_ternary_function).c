/*          EX1: Write C Program to Check Whether a Number is Even or Odd       */


#include <stdio.h>
#include <stdlib.h>



int main()
{
    int a;
    printf("Enter an integer you want to check: ");
    fflush(stdout); fflush(stdin);
    scanf("%d",&a);

    (a%2 == 0)?printf("%d is even",a):printf("%d is odd",a);

}
