/*
Author: Francisco Gomes da Silva Junior
Date: 15/09/2025 - in format Brazil
Description: Read letter of gender and identify if Male or Female
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section of variables
    char gender_people;

    // Read data user input
    printf("What your gender, M ou F?");
    scanf("%c", &gender_people);

    // Conditional Structure
    if (gender_people == 'M')
    {
        printf("Gender Male");
    }
    else if (gender_people == 'F')
    {
        printf("Gender Female");
    }

    return 0;
}