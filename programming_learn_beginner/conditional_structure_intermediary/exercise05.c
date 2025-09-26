/*
Author: Francisco Gomes da Silva Junior
Date: 26/09/2025 - in format Brazil
Description: read three notes of student and identify if average notes is bigger >= 7
version: 1.0
*/

#include <stdio.h>

int main()
{
    // section of variables
    float note_one, note_two, note_three, average_notes;

    // Read data user input
    printf("Note one: ");
    scanf("%f", &note_one);

    printf("Note two: ");
    scanf("%f", &note_two);

    printf("Note three: ");
    scanf("%f", &note_three);

    // Calculate average of notes
    average_notes = (note_one + note_two + note_three) / 3.0;

    // validation status of student
    if (average_notes >= 7.0 && average_notes <= 10.0)
    {
        printf("You is approved. Notes average is: %.2f\n", average_notes);
    }
    else
    {
        printf("You is reproved, try again! Notes average is: %.2f\n", average_notes);
    }

    return 0;
}