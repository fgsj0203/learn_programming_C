/*
Author: Francisco Gomes da Silva Junior
Date: 09/09/2025 - in format Brazil
Description: Read a two numbers, calculate subtraction of numbers and printing value final
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number_one, number_two, subtraction;

    // Read of user input data
    printf("The number one is: ");
    scanf("%d", &number_one);

    printf("The number two is: ");
    scanf("%d", &number_two);

    subtraction = number_one - number_two; // variable created in section head

    printf("The subtraction of two numbers is: %d\n", subtraction);                                // first format for printing value, using variable
    printf("The second format for printing value of subtraction is: %d", number_one - number_two); // Calculating directly in function "printf"

    //
}