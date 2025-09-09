/*
Author: Francisco Gomes da Silva Junior
Date: 09/09/2025 - in format Brazil
Description: Read a two numbers and print a bigger number
version: 1.0
*/

#include <stdio.h>

int main()
{

    // Section variables
    int number_one, number_two;

    // Read data user input
    printf("Number one: ");
    scanf("%d", &number_one);

    printf("Number two: ");
    scanf("%d", &number_two);

    // Printing value is bigger using structure conditional
    if (number_one > number_two)
    {
        printf("Number one is bigger, %d > %d", number_one, number_two);
    }
    else
    {
        printf("Number two is bigger, %d > %d", number_two, number_one);
    }
}