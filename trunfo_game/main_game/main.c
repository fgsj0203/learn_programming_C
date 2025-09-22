/*
Author: Francisco Gomes da Silva Junior
Date: 22/09/2025 - In format Brazil
College: Estacio de Sa
Description: Create game of received input data (State, code card, name city, population, area, PIB, number points touristc)
             of two cards data country and comparate values. The card with bigger value is win.

Version: 1.0
*/

#include <stdio.h>
#include <string.h>

int main()
{
    // Section of variables
    char state_region_a[2];
    char card_code[5];
    char name_city[20];
    int population_country;
    float area_country;
    float pib_country;
    int number_points_touristic;
    //----------------------------------------------

    printf("Welcome a game trunfo, get started?! :D\n");

    printf("********** Data of Card 1 **********\n");
    printf("Help data: State region is a letter in range A - H\n");
    printf("Input a state region: \n");
    scanf(" %c", state_region_a);

    printf("--------------------------------------------------------------------\n");

    printf("Help data: A code card is number in range 01 - 04\n");
    printf("Input a code card: \n");
    scanf(" %s", card_code);

    printf("--------------------------------------------------------------------\n");

    printf("Help data: Name of city not contain number\n");
    printf("Input a name city: \n");
    scanf(" %s", name_city);

    printf("--------------------------------------------------------------------\n");

    printf("Help data: Input a amount population, number in format integer. Not contain letter/char\n");
    printf("Input a amount population: \n");
    scanf("%d", &population_country);

    printf("--------------------------------------------------------------------\n");

    printf("Help data: input a size area in format km². Data type: integer or decimal number\n");
    printf("Input a size of area: \n");
    scanf("%f", &area_country);

    printf("--------------------------------------------------------------------\n");

    printf("Help data: input a PIB of country. Data type: decimal number\n");
    printf("Input a PIB Country: \n");
    scanf("%f", &pib_country);

    printf("--------------------------------------------------------------------\n");

    printf("Help data: Input a number of points touristics of country. Data type: integer\n");
    printf("Input a number of points touristics: \n");
    scanf("%d", &number_points_touristic);

    // Printing all values of card one
    printf("***************** All values of Card A *****************\n");
    printf("State region: %c \n", state_region_a);
    printf("Card code: %c \n", card_code);
    printf("Name city: %c \n", name_city);
    printf("Population country: %d \n", population_country);
    printf("Area country: %.2f \n", area_country);
    printf("PIB Country: %.2f \n", pib_country);
    printf("Number points touristics: %d \n", number_points_touristic);
}