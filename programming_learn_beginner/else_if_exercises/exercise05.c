/*
Author: Francisco Gomes da Silva Junior
Date: 17/09/2025 - in format Brazil
Description: read two numbers, if two numbers is equal calculate a sum of two numbers, if numbers is different, calculate a product of two numbers
version: 1.0
*/

#include <stdio.h>

int main()
{
    // section of variables
    int number_one, number_two;

    // Read data user input
    printf("Number one: \n");
    scanf("%d", &number_one);

    printf("Number two: \n");
    scanf("%d", &number_two);

    // Conditional structure
    if (number_one == number_two)
    {
        printf("%d + %d = %d", number_one, number_two, (number_one + number_two));
    }
    else
    {
        printf("%d X %d = %d", number_one, number_two, (number_one * number_two));
    }

    return 0;
}