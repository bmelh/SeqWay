#include "seq_lib.h"

void main_menu(char *sequence)
{
    int selection;

    printf("Selection :\n");
    printf("1 : DNA \n");
    scanf("%d", &selection);
    switch (selection)
{
    case 1:
        DNA_sequence_checker(sequence);
        DNA_menu(sequence);
        break;
    default:
        printf("Not an option.\n");
} 

}