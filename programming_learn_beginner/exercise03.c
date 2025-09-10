/*
Author: Francisco Gomes da Silva Junior
Date: 10/09/2025 - in format Brazil
Description: Read age of people and identify if adult
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section variables
    int age;

    // Reading data user input
    printf("Age of people: ");
    scanf("%d", &age);

    // Conditional structure
    if (age >= 18)
    {
        printf("The people is adult, he have %d", age);
    }
    else
    {
        printf("The people is not adult, he have %d", age);
    }
}