/*          EX8: C Program to Make a Simple Calculator to Add, Subtract, Multiply or Divide using switch..case       */

#include <stdio.h>
#include <stdlib.h>



int main()
{
    char operator_choice;
    float operand1, operand2;

    /*      Reading the Operator    */
    printf("Enter operator either + or - or * or divide : ");
    scanf("%c",&operator_choice);

    /*      Reading the Operands    */
    printf("Enter two operands: ");
    scanf("%f%f",&operand1, &operand2);


    switch (operator_choice)
    {
    case '+':
    {
        printf("%.1f + %.1f = %.1f", operand1, operand2, operand1+operand2);
    }
    break;

    case '-':
    {
        printf("%.1f - %.1f = %.1f", operand1, operand2, operand1-operand2);
    }
    break;

    case '*':
    {
        printf("%.1f * %.1f = %.1f", operand1, operand2, operand1*operand2);
    }
    break;

    case '/':
    {
        printf("%.1f / %.1f = %.1f", operand1, operand2, operand1/operand2);
    }
    break;

    default:
    {
        printf("Incorrect Input");
    }


    }




}
