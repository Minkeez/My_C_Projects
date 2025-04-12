#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

void calculate(double num1, double num2, char operator);

int main(void)
{
    double num1, num2;
    char operator, conCal;
    bool calIsOn = true;

    printf("==============================\n");
    printf("Welcome to Basic Calculator\n");
    printf("==============================\n");

    while (calIsOn)
    {
        printf("\nEnter first number: ");
        scanf("%lf", &num1);

        printf("Enter Operator (+, -, *, /): ");
        scanf(" %c", &operator);

        printf("Enter second number: ");
        scanf("%lf", &num2);

        if (operator != '+' && operator != '-' && operator != '*' && operator != '/')
        {
            printf("Invalid operator. Please use +, -, * or /.\n");
        }
        else
        {
            calculate(num1, num2, operator);
        }

        printf("\n==============================\n");

        printf("Continue calculate? (y/n): ");
        scanf(" %c", &conCal);
        
        if(tolower(conCal) == 'n')
        {
            printf("Thanks for using the calculator. Goodbye!\n");
            calIsOn = false;
        }
    }
}

void calculate(double num1, double num2, char operator)
{
    double result;

    switch (operator)
    {
    case '+':
        result = num1 + num2;
        printf("Result = %.2lf\n", result);
        break;
    
    case '-':
        result = num1 - num2;
        printf("Result = %.2lf\n", result);
        break;
    
    case '*':
        result = num1 * num2;
        printf("Result = %.2lf\n", result);
        break;
    
    case '/':
        if (num2 != 0)
        {
            result = num1 / num2;
            printf("Result = %.2lf\n", result);
        }
        else
        {
            printf("Error: Cannot divide by zero.\n");
        }
        break;
    }
}