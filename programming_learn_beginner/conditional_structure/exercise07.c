/*
Author: Francisco Gomes da Silva Junior
Date: 12/09/2025 - in format Brazil
Description: Read note of test student and identify status, if value is bigger 7 return approved
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section of variables
    float note;

    // Read data user input
    printf("Note student: ");
    scanf("%f", &note);

    // Conditional structure
    if (note > 7)
    {
        printf("Approved");
    }
    else
    {
        printf("Reproved");
    }
    return 0;
}