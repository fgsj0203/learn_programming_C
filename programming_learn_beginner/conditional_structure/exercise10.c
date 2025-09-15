/*
Author: Francisco Gomes da Silva Junior
Date: 15/09/2025 - in format Brazil
Description: Read input word and identify if "Flamengo" or "Corinthians"
version: 1.0
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // section variables
    char name_soccer_squad[20];

    // Read data user input
    printf("Name squad soccer: ");
    scanf("%s", name_soccer_squad);

    // Conditional structure
    if (strcmp(name_soccer_squad, "Flamengo") == 0)
    {
        printf("You soccer squad is Flamengo");
    }
    else if (strcmp(name_soccer_squad, "Corinthians") == 0)
    {
        printf("You soccer squad is Corinthians");
    }
    else
    {
        printf("You soccer squad is not Corinthians and Flamengo");
    }

    return 0;
}