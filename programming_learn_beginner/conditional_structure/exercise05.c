/*
Author: Francisco Gomes da Silva Junior
Date: 09/09/2025 - in format Brazil
Description: read a two numbers and printing smaller value
version: 1.0
*/

#include <stdio.h>

int main()
{
    // section variables
    int number_one, number_two;

    // Reading data user input
    printf("Number one: ");
    scanf("%d", &number_one);

    printf("Number two: ");
    scanf("%d", &number_two);

    // Conditional structure
    if (number_one < number_two)
    {
        printf("Number one - %d < number two - %d", number_one, number_two);
    }
    else
    {
        printf("Number two - %d < number one - %d", number_two, number_one);
    }
}