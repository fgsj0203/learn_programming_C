/*
Author: Francisco Gomes da Silva Junior
Date: 09/09/2025 - in format Brazil
Description: Read a number and printing double value
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section variables
    int number;

    // Read value of user input
    printf("The input a number: ");
    scanf("%d", &number);

    // Printing value final
    printf("The double of %d is %d ", number, (number * 2));
}