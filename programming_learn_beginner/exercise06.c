/*
Author: Francisco Gomes da Silva Junior
Date: 09/09/2025 - in format Brazil
Description: Read a two numbers, calculate rest of division printing value final
version: 1.0
*/

#include <stdio.h>

int main()
{
    // section variables
    int number_one, number_two, rest_division;

    // Read input data
    printf("Number one: ");
    scanf("%d", &number_one);

    printf("Number two: ");
    scanf("%d", &number_two);

    rest_division = number_one % number_two;

    printf("The rest division value of two numbers is: %d\n", rest_division);                        // First format for printing value final of rest division
    printf("The second format for printing value of rest division is: %d", number_one % number_two); // second format for printing value final
}