/*
Author: Francisco Gomes da Silva Junior
Date: 15/09/2025 - in format Brazil
Description: Read two values and comparate if equals
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number_one, number_two;

    // Read data user input
    printf("Number one: ");
    scanf("%d", &number_one);

    printf("Number two: ");
    scanf("%d", &number_two);

    // Conditional structure
    if (number_one == number_two)
    {
        printf("Number is equal");
    }
    else
    {
        printf("Number not equal");
    }

    return 0;
}