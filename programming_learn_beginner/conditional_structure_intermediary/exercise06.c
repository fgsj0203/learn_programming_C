/*
Author: Francisco Gomes da Silva Junior
Date: 26/09/2025 - in format Brazil
Description: read three notes, calculate average and identified if average is approved, in recuperation or repproved.
version: 1.0
*/

#include <stdio.h>

int main()
{
    // Section of variables
    float note_one, note_two, note_three, average_notes;

    // Read data user input
    printf("Note one: ");
    scanf("%f", &note_one);

    printf("Note two: ");
    scanf("%f", &note_two);

    printf("Note three: ");
    scanf("%f", &note_three);

    // calculate average of notes
    average_notes = (note_one + note_two + note_three) / 3.0;

    // validation of number is positive
    if (average_notes < 0)
    {
        average_notes = average_notes * (-1);
    }

    // Validation status of student
    if (average_notes >= 7.0 && average_notes <= 10.0)
    {
        printf("You is approved. The note is: %.2f\n", average_notes);
    }
    else if (average_notes >= 5.0 && average_notes <= 6.9)
    {
        printf("You is recuperation. The note is: %.2f\n", average_notes);
    }
    else
    {
        printf("You is repproved. The note is: %.2f\n", average_notes);
    }

    return 0;
}