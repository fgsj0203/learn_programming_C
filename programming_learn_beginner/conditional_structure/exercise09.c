/*
Author: Francisco Gomes da Silva Junior
Date: 12/09/2025 - in format Brazil
Description: Read price and return if value in promotion < 50
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section variables
    float height_people;

    // Read data user input
    printf("What your height: ");
    scanf("%f", &height_people);

    // Structure conditional
    if (height_people > 1.80)
    {
        printf("You is high person");
    }
    else
    {
        printf("You is not high person");
    }

    return 0;
}