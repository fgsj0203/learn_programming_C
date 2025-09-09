/*
Author: Francisco Gomes da Silva Junior
Date: 09/09/2025 - in format Brazil
Description: read a value and print its success and predecessor
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section of variable
    int number;

    printf("The number: ");
    scanf("%d", &number);

    printf("Success of %d is %d and predecessor is %d\n", number, number + 1, number - 1);
    printf("Printing in second format\n");
    printf("Number original: %d\n", number);
    printf("Number success: %d\n", number + 1);
    printf("Number predecessor: %d", number - 1);
}