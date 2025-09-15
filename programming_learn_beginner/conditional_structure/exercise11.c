/*
Author: Francisco Gomes da Silva Junior
Date: 15/09/2025 - in format Brazil
Description: Read value of temperature and identify if hot or cold
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int temperature;

    // Read data user input
    printf("Input a temperature: ");
    scanf("%d", &temperature);

    // Conditional structure
    if (temperature > 25)
    {
        printf("Temperature is HOT");
    }
    else
    {
        printf("Temperature is Cold");
    }

    return 0;
}