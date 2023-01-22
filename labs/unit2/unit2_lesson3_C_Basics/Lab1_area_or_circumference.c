/*      Lab1: Calculate the Circle Area or Circumference    */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159


int main()
{

    float r;
    char choice;

    printf("Enter Circle Radius: ");
    scanf("%f",&r);

    printf("Enter your choice (a to print the area, c to print the circumference): ");
    scanf(" %c",&choice);
    //Note: when added a space before the %c, it didn't take the Enter key as an input

    if (choice == 'a' || choice == 'A')
        printf("Area is %f",PI*r*r);
    else if (choice == 'c' || choice == 'C')
        printf("Circumference is %f", 2*PI*r);
    else
        printf("wrong input, please try again");


}
