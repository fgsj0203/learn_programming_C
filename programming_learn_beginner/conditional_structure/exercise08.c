/*
Author: Francisco Gomes da Silva Junior
Date: 12/09/2025 - in format Brazil
Description: Read price and return if value in promotion < 50
version: 1.0
*/

#include <stdio.h>

int main()
{
    // section variables
    float price_product;

    // Read data user input
    printf("Price of product: ");
    scanf("%f", &price_product);

    // Conditional structure
    if (price_product < 50)
    {
        printf("Product in sale promotion");
    }
    else
    {
        printf("Product not in promotion");
    }

    return 0;
}