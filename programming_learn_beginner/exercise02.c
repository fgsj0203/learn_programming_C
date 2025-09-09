/*
Author: Francisco Gomes da Silva Junior
Date: 09/09/2025 - in format Brazil
Description: Read a two numbers, calculate sum numbers and printing value final
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section variables
    int number_one, number_two, sum_numbers;

    // Reading values input
    printf("Number one: ");
    scanf("%d", &number_one);

    printf("Number two: ");
    scanf("%d", &number_two);

    // int sum_numbers = number_one + number_two; // Creating variable exclusive for calculate sum of two numbers
    sum_numbers = number_one + number_two;

    printf("Sum of two numbers: %d\n", (number_one + number_two));
    printf("Second format of two numbers is: %d", sum_numbers);
}