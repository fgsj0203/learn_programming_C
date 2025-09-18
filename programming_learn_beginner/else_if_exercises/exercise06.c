/*
Author: Francisco Gomes da Silva Junior
Date: 17/09/2025 - in format Brazil
Description: read two numbers, if two numbers is equal calculate a sum of two numbers, if numbers is different, calculate a product of two numbers
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section of variables
    float salary_brute_employee;

    // Read data user input
    printf("What your salary of employee: \n");
    scanf("%f", &salary_brute_employee);

    // Conditional structure
    if (salary_brute_employee <= 1500)
    {
        printf("You salary brute now: %.2f \n", salary_brute_employee);
        printf("The salary have growthing of 20 percent in value %.2f \n", (salary_brute_employee * 0.20));
        printf("The salary today is: %.2f", (salary_brute_employee + (salary_brute_employee * 0.20)));
    }
    else if (salary_brute_employee <= 2500)
    {
        printf("You salary brute now: %.2f \n", salary_brute_employee);
        printf("The salary have growthing of 15 percent in value %.2f \n", (salary_brute_employee * 0.15));
        printf("The salary today is: %.2f ", (salary_brute_employee + (salary_brute_employee * 0.15)));
    }
    else
    {
        printf("You salary brute now: %.2f \n", salary_brute_employee);
        printf("The salary have growthing of 10 percent in value %.2f \n", (salary_brute_employee * 0.10));
        printf("The salary today is: %.2f ", (salary_brute_employee + (salary_brute_employee * 0.10)));
    }

    return 0;
}