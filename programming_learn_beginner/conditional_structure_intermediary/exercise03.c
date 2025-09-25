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
    if (number_one >= number_two && number_one > number_three && number_two > number_three)
    {
        printf("Number three is smaller, the number is: %d", number_three);
        if (number_one == number_two)
        {
            printf("Number one is equal a number two: %d = %d", number_one, number_two);
        }
        else if (number_one == number_three)
        {
            printf("number one is equal a number three: %d = %d", number_one, number_three);
        }
        else
        {
            printf("Number two is equal a number three: %d = %d", number_two, number_three);
        }
    }

    return 0;
}