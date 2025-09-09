/*
Author: Francisco Gomes da Silva Junior
Date: 09/09/2025 - in format Brazil
Description: Read a two numbers, calculate product(multiplication) numbers and printing value final
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section variables
    int number_one, number_two, multiplication;

    // Read data of input user
    printf("Number one: ");
    scanf("%d", &number_one);

    printf("Number two:");
    scanf("%d", &number_two);

    multiplication = number_one * number_two;

    printf("The first format for printing value: %d\n", multiplication);         // Using value storage in variable
    printf("The second format for printing value: %d", number_one * number_two); // printing value with calculate directly in "printf"
}