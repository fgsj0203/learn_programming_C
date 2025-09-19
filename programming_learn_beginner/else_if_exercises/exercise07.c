/*
Author: Francisco Gomes da Silva Junior
Date: 17/09/2025 - in format Brazil
Description: read two numbers and one operation arithmetic
version: 1.0
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // section of variables
    int number_one, number_two;
    char operation_math;

    // Read data user input
    printf("Number one: \n");
    scanf("%d", &number_one);

    printf("Number two: \n");
    scanf("%d", &number_two);

    printf("Select a operation of math: \n");
    scanf(" %c", &operation_math);

    // Conditional structure
    if (operation_math == '+')
    {
        printf("%d + %d = %d", number_one, number_two, (number_one + number_two));
    }
    else if (operation_math == '-')
    {
        printf("%d - %d = %d", number_one, number_two, (number_one - number_two));
    }
    else if (operation_math == '*')
    {
        printf("%d X %d = %d", number_one, number_two, (number_one * number_two));
    }
    else if (operation_math == '/')
    {
        printf("%d / %d = %d", number_one, number_two, (number_one / number_two));
    }

    return 0;
}