/*
Author: Francisco Gomes da Silva Junior
Date: 09/09/2025 - in format Brazil
Description: Read a number and identify if number is positive or negative
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

    // conditional for identify number
    if (number >= 0)
    {
        printf("%d is positive", number);
    }
    else
    {
        printf("%d is negative", number);
    }
}