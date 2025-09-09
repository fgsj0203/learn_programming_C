/*
Author: Francisco Gomes da Silva Junior
Date: 09/09/2025 - in format Brazil
Description: Read a two numbers, calculate square of number
version: 1.0
*/

#include <stdio.h>

int main()
{
    // section of variables
    int number, square_number;

    // Read data user input
    printf("Input a number: ");
    scanf("%d", &number);

    // Calculating square of number
    square_number = number * number;

    // Printing value final of number elevate square
    printf("The square of number is: %d", square_number);
}