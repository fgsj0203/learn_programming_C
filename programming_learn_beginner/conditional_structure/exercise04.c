/*
Author: Francisco Gomes da Silva Junior
Date: 10/09/2025 - in format Brazil
Description: read two number is identify a bigger number
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section variables
    int number_one, number_two;

    // Reading a data user input
    printf("Number one: ");
    scanf("%d", &number_one);

    printf("Number two: ");
    scanf("%d", &number_two);

    // Conditional structure
    if (number_one > number_two)
    {
        printf("The number one - %d > number two - %d", number_one, number_two);
    }
    else
    {
        printf("The number two - %d > number one - %d", number_two, number_one);
    }
}