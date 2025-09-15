/*
Author: Francisco Gomes da Silva Junior
Date: 15/09/2025 - in format Brazil
Description: Read value of salary minimal and identify if you salary is bigger or smaller of value salary minimal
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section variables
    float salary_brute, salary_minimal;

    // Read data user input
    printf("What value of salary minimal?");
    scanf("%f", &salary_minimal);
    printf("What value of salary brute personal?");
    scanf("%f", &salary_brute);

    // Conditional of structure
    if (salary_brute > salary_minimal)
    {
        printf("You salary is bigger of salary minimal");
    }
    else
    {
        printf("You salary is smaller of salary minimal");
    }

    return 0;
}