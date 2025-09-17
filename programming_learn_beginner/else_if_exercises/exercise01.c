/*
Author: Francisco Gomes da Silva Junior
Date: 17/09/2025 - in format Brazil
Description: Read value and identify if number is positive, negative or zero
version: 1.0
*/

#include <stdio.h>

int main()
{
    // section variables
    int number;

    // read data user input
    printf("Number: ");
    scanf("%d", &number);

    // conditional structure
    if (number == 0)
    {
        printf("Number is zero");
    }
    else if (number > 0)
    {
        printf("Number is positive");
    }
    else
    {
        printf("Number is negative");
    }

    return 0;
}