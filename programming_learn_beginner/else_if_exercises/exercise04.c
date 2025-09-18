/*
Author: Francisco Gomes da Silva Junior
Date: 17/09/2025 - in format Brazil
Description: read three notes of student and classify a status
version: 1.0
*/

#include <stdio.h>

int main()
{
    // section variables
    float note_one, note_two, note_three, average_notes;

    // read data user input
    printf("Note one: \n");
    scanf("%f", &note_one);

    printf("Note two: \n");
    scanf("%f", &note_two);

    printf("Note three: \n");
    scanf("%f", &note_three);

    average_notes = (note_one + note_two + note_three) / 3.0;

    if (average_notes < 5)
    {
        printf("You reproved, you average of notes is: %.2f ", average_notes);
    }
    else if (average_notes >= 7)
    {
        printf("You is aproved, you average of notes is: %.2f ", average_notes);
    }
    else if (average_notes < 7 || average_notes >= 5)
    {
        printf("You is aproved in limit, you average of notes is: %.2f ", average_notes);
    }

    return 0;
}