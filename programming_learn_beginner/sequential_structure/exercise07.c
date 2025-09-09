/*
Author: Francisco Gomes da Silva Junior
Date: 09/09/2025 - in format Brazil
Description: Read a three numbers, calculate sum numbers and printing value final
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number_one, number_two, number_three, sum_three_numbers;

    // Input and read data user
    printf("Number one: ");
    scanf("%d", &number_one);

    printf("Number two: ");
    scanf("%d", &number_two);

    printf("Number three: ");
    scanf("%d", &number_three);

    sum_three_numbers = number_one + number_two + number_three;

    printf("The sum of three numbers is: %d\n", sum_three_numbers);                                     // First format for printing numbers
    printf("(Second format)The sum of three numbers is: %d", (number_one + number_two + number_three)); // Second format for printing three numbers
}