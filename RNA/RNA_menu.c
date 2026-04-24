#include "../seq_lib.h"
// RNA MENU IN TIMEOUT
void DNA_menu(char *sequence)
{
    int selection;

    printf("Selection :\n");
    printf("0 : Print RNA Composition \n");
    printf("1 : Print RNA complementary chain\n");
    printf("2 : GC Ratio Within N window\n");
    printf("3 : Find first occurence of target sequence \n");
    printf("4 : Find all occurences of target sequence\n");
    printf("5 : Find first occurence of target sequence with Humming Method \n");
    printf("6 : Find all occurences of target sequence with Humming Method \n");
    scanf("%d", &selection);
    switch (selection)
    {
    case 0:
        RNA_base_number_and_ratios(sequence);
        break;
    case 1:
        RNA_complementary_chain(sequence);
        break;
    case 2:
        strict_highest_GC_ratio(sequence);
        break;
    case 3:
        search_for_sequence_A(sequence);
        break;
    case 4:
        search_for_sequence_A_all(sequence);
        break;
    case 5:
        search_for_sequence_A_all(sequence);
        break;
    default:
        printf("Please enter a valid value \n");
        break;
    }    
}