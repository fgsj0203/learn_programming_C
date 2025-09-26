/*
Author: Francisco Gomes da Silva Junior
Date: 26/09/2025 - in format Brazil
Description: Read age of people and identify if people is driving.
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int age_people, return_character;

    // Read data user input
    printf("What you age: ");
    return_character = scanf("%d", &return_character);

    // Validation input data user
    if (return_character == 0)
    {
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF) // cleaning buffer in memory.
            ;
        printf("you input is letter. Input only a number positive\n");
        printf("Input a age: \n");
        scanf("%d", &age_people);
        if (age_people >= 18)
        {
            printf("You is authorized for driving. Age: %d\n", age_people);
        }
        else
        {
            printf("You is permission denied for driving. Age: %d", age_people);
        }
    }
    else
    {
        scanf("%d", age_people);
        if (age_people >= 18)
        {
            printf("You is authorized for driving. Age: %d\n", age_people);
        }
        else
        {
            printf("You is permission denied for driving. Age: %d", age_people);
        }
    }

    return 0;
}