/*
Author: Francisco Gomes da Silva Junior
Date: 26/09/2025 - in format Brazil
Description: read two numbers and printing a bigger number. If two numbers is equal, notify user.
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

    // Validating data user input
    if (number_one > number_two)
    {
        printf("The number is big of number two, %d > %d", number_one, number_two);
    }
    else if (number_two > number_one)
    {
        printf("The number two is big number one, %d > %d", number_two, number_one);
    }
    else
    {
        printf("Two numbers is equal, %d = %d", number_one, number_two);
    }

    return 0;
}