/*
Author: Francisco Gomes da Silva Junior
Date: 26/09/2025 - in format Brazil
Description: Read age of people and validation if people have is vote
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section of variables
    int age;

    // Read data user input
    printf("What you age?\n");
    scanf("%d", &age);

    // validation age people (if number input is negative)
    if (age < 0)
    {
        age = age * (-1);
    }

    // Validation of age people is permission for vote
    if (age >= 16)
    {
        printf("Congrats. You is vote permission. You age: %d", age);
    }
    else
    {
        printf("You can't vote. You age: %d", age);
    }

    return 0;
}
