/*
Author: Francisco Gomes da Silva Junior
Date: 17/09/2025 - in format Brazil
Description: read number in between 1-7 and classified day of week based in number
version: 1.0
*/

#include <stdio.h>

int main()
{
    // section variables
    int number_day_week;

    // read data user input
    printf("Input a number: 1-7\n");
    scanf("%d", &number_day_week);

    // conditional structure
    if (number_day_week == 1)
    {
        printf("Domingo");
    }
    else if (number_day_week == 2)
    {
        printf("Segunda Feira");
    }
    else if (number_day_week == 3)
    {
        printf("Terça Feira");
    }
    else if (number_day_week == 4)
    {
        printf("Quarta Feira");
    }
    else if (number_day_week == 5)
    {
        printf("Quinta Feira");
    }
    else if (number_day_week == 6)
    {
        printf("Sexta Feira");
    }
    else if (number_day_week == 7)
    {
        printf("Sábado");
    }
    else
    {
        printf("Dia inválido");
    }

    return 0;
}