/*
Author: Francisco Gomes da Silva Junior
Date: 15/09/2025 - in format Brazil
Description: Read value and identify if number positive or negative or zero
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number;

    // Read data user input
    printf("Number: ");
    scanf("%d", &number);

    // Conditional structure
    if (number == 0)
    {
        printf("Number is zero");
    }
    else if (number > 0)
    {
        printf("Number is positive");
    }
    else
    {
        printf("Number is negative");
    }

    return 0;
}