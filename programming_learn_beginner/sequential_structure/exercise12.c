/*
Author: Francisco Gomes da Silva Junior
Date: 09/09/2025 - in format Brazil
Description: Read a year birthday and print date
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section variables
    int year_birthday_people;

    // Read data user input
    printf("What your year birthday?");
    scanf("%d", &year_birthday_people);

    // Printing value final
    printf("Your year of birthday is: %d", year_birthday_people);
}