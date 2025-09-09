/*
Author: Francisco Gomes da Silva Junior
Date: 09/09/2025 - in format Brazil
Description: Read a note of student and printing
version: 1.0
*/

#include <stdio.h>

int main()
{

    // Section variables
    float note_student; // Data type is now "float"

    // Read data user input
    printf("What note of student: ");
    scanf("%f", &note_student);

    // Printing note student
    printf("The note of student is: %.2f", note_student);
}