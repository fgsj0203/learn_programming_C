/*
Author: Francisco Gomes da Silva Junior
Date: 24/09/2025 - in format Brazil
Description: read number and classify if number is positive, negative or zero. Validate not inserting character, only numbers.
version: 1.0
*/

#include <stdio.h>

int main()
{
    // section variables
    int number, return_character;

    // Read data user input
    printf("Enter with a character: \n");
    return_character = scanf("%d", &number); // if value return_character == 0 (data input = letter) / if value return_character == 1 (data input = number)

    // Validation of input data
    if (return_character == 0)
    {
        printf("Input invalid, try again with a number input\n");
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF) // Cleaning memory buffer
            ;
        printf("Input a only data type integer and number\n");
        scanf(" %d", &number);
        if (number > 0)
        {
            printf("You number is %d, number positive", number);
        }
        else if (number == 0)
        {
            printf("The number is zero");
        }
        else
        {
            printf("You number is %d, number negative", number);
        }

        return 1;
    }

    if (return_character == 1)
    {
        // printf("You input a number, congrats. Number: %d ", number);
        if (number == 0)
        {
            printf("Your number is zero");
        }
        else if (number > 0)
        {
            printf("Your number is positive");
        }
        else
        {
            printf("Number is negative");
        }
    }

    return 0;
}