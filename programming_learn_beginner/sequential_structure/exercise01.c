/*
Author: Francisco Gomes da Silva Junior
Date: 09/09/2025 - in format Brazil
Description: Read a number and printing your value, one value initializer in variable and read value in variable using function built-in "scanf"
version: 1.0
*/

#include <stdio.h>

int main()
{
    // declaring variables and initializer with value
    int number = 10;
    int number_final;
    //------------------------------------------------
    printf("The number is: %d\n", number); // Printing number with value initializer

    // Read number in variable and printing value final
    printf("The final number is: ");
    scanf("%d", &number_final); //"Scanf" use for read number input of user
    printf("The final number is: %d", number_final);
}