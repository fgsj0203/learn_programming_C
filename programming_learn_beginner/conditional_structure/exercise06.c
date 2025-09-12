/*
Author: Francisco Gomes da Silva Junior
Date: 10/09/2025 - in format Brazil
Description: Read a character and identify if letter is vowel or consonant
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section of variables
    char letter;

    // Reading data user input
    printf("Input a letter: ");
    scanf(" %c", &letter);

    // Conditional structure
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u')
    {
        printf("Letter is vowel");
    }
    else
    {
        printf("Letter is consonant");
    }
    return 0;
}