#include <stdio.h>
#include <stdlib.h>



int main()
{
    char operator_choice;
    float operand1, operand2;

    printf("Enter operator either + or - or * or divide : ");
    scanf("%c",&operator_choice);

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
