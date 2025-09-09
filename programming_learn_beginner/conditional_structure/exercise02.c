/*
Author: Francisco Gomes da Silva Junior
Date: 09/09/2025 - in format Brazil
Description: Read a number and identify is pair or odd
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number;

    // Read a data user input
    printf("Input a number: ");
    scanf("%d", &number);

    // Conditional structure
    if (number % 2 == 0)
    {
        printf("The %d is pair", number);
    }
    else
    {
        printf("The %d is odd", number);
    }
}