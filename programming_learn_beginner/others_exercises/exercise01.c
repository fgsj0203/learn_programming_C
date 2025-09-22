/*
Author: Francisco Gomes da Silva Junior
Date: 18/09/2025 - in format Brazil
Description: read name of login and password and comparate is correct
version: 1.0
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // Section of variables
    char user_system[] = "Francisco";
    char password_system[] = "IEtaps10!@#";
    char user_input[30];
    char password_input[20];

    // Read data user input
    printf("What a user input? \n");
    scanf(" %s", user_input);

    printf("What a password? \n");
    scanf(" %s", password_input);

    // Comparating values with structure conditional
    if (strcmp(user_input, user_system) == 0 && strcmp(password_input, password_system) == 0)
    {
        printf("You credentials is valid, User: %s \n Password: %s", user_input, password_input);
    }
    else
    {
        printf("You credentials is not valid, user: %s \n Password: %s", user_system, password_system);
    }

    return 0;
}