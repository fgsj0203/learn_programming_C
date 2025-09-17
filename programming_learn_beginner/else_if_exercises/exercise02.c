/*
Author: Francisco Gomes da Silva Junior
Date: 17/09/2025 - in format Brazil
Description: Read value and identify if people is kids or teen or adult
version: 1.0
*/

#include <stdio.h>

int main()
{
    // section variables
    int age;

    // read data user input
    printf("What your age? ");
    scanf("%d", &age);

    // conditional structure
    if (age > 0 && age <= 12)
    {
        printf("Your is kids");
    }
    else if (age > 12 && age <= 17)
    {
        printf("Your is teen");
    }
    else
    {
        printf("Your is adult");
    }

    return 0;
}