/*
Author: Francisco Gomes da Silva Junior
Date: 24/09/2025 - in format Brazil
Description: read three numbers and printing a smaller number. If some a number is equal, notify user.
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int number_one, number_two, number_three;

    // Read data user input
    printf("Number one: \n");
    scanf("%d", &number_one);

    printf("Number two: \n");
    scanf("%d", &number_two);

    printf("Number three: \n");
    scanf("%d", &number_three);

    // validating data user input
    // First validation
    if (number_one < number_two && number_two < number_three)
    {
        printf("Number one is smaller. The number: %d\n", number_one);
    }
    else if (number_two < number_three)
    {
        printf("Number two is smaller. The number: %d\n", number_two);
    }
    else
    {
        printf("Number three is smaller. The number: %d\n", number_three);
    }

    // validating if any number is equal
    if (number_one == number_two || number_one == number_three || number_two == number_three)
    {
        printf("Two numbers is equal");
    }

    return 0;
}