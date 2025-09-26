/*
Author: Francisco Gomes da Silva Junior
Date: 24/09/2025 - in format Brazil
Description: read number and calculate if number is pair or odd (valid for number negative)
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number;

    // Read data user input
    printf("Input a number: ");
    scanf("%d", &number);

    // Validating input data
    if (number < 0)
    {
        number = number * (-1);
        if (number % 2 == 0)
        {
            printf("Number is pair. Number: %d\n", number);
        }
        else
        {
            printf("Number is odd. Number: %d\n", number);
        }

        return 1;
    }

    else if (number % 2 == 0)
    {
        printf("Number is pair. Number: %d\n", number);
    }
    else
    {
        printf("Number is odd. Number: %d", number);
    }

    return 0;
}