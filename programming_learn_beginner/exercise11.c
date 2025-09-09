/*
Author: Francisco Gomes da Silva Junior
Date: 09/09/2025 - in format Brazil
Description: Read a two numbers, calculate sum numbers and product
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section variables
    int number_one, number_two, sum_numbers, product_numbers;

    // Read data user input
    printf("Number one: ");
    scanf("%d", &number_one);

    printf("Number two: ");
    scanf("%d", &number_two);

    sum_numbers = number_one + number_two;
    product_numbers = number_one * number_two;

    // Printing final values
    printf("The sum of numbers is: %d\n", sum_numbers);
    printf("The product of numbers id: %d", product_numbers);
}