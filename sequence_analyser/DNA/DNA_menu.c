#include "../seq_lib.h"


/* Is Base

* Checksif the character is a DNA base ACTG

*input : DNA Base (char)

*output : 1 if ACTG / 0 if else

**README :
        Checks that the base is either A C T or G
*/

void DNA_menu(char *sequence)
{
    int selection;

    printf("Selection :\n");
    printf("0 : Print DNA Composition \n");
    printf("1 : Print DNA complementary chain\n");
    printf("2 : Print RNA of Main chain \n");
    printf("3 : Print RNA of complementary chain\n"); 
    printf("4 : GC Raio Within N window\n");
    printf("5 : Find first occurence of target sequence \n");
    printf("6 : Find all occurences of target sequence\n");
    printf("7 : Find first occurence of target sequence with Humming Method \n");
    printf("8 : Find all occurences of target sequence with Humming Method \n");
    scanf("%d", &selection);
    switch (selection)
    {
    case 0:
        DNA_base_number_and_ratios(sequence);
        break;
    case 1:
        DNA_complementary_chain(sequence);
        break;
    case 2:
        DNA_to_RNA_converter_main(sequence);
        break;
    case 3:
        DNA_to_RNA_complementary(sequence);
        break;
    case 4:
        strict_highest_GC_ratio(sequence);
        break;
    case 5:
        search_for_sequence_A(sequence);
        break;
    case 6:
        search_for_sequence_A_all(sequence);
        break;
    case 7:
        search_for_sequence_Humming(sequence);
        break;
    default:
        printf("Please enter a valid value \n");
        break;
    }    
}