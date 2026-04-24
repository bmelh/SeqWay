#include "../seq_lib.h"

/*Global variable used to store Translated DNA to RNA for future USE*/
char *stored_RNA_of_main_DNA_chain = NULL;

/* RNA_converte_of_main_sequence

* Stores the RNA converted sequence of the complementary DNA chain

*input : DNA Sequence (char *)

*output : RNA Sequence (char *)

**README :
            ADD unrecognised bases and IUPAC Values if exists for RNA
*/

void DNA_to_RNA_converter_main(char *DNA_sequence)
{
    long long int len,i = 0;

    if(stored_RNA_of_main_DNA_chain)
        free(stored_RNA_of_main_DNA_chain);
    len = (long long int) strlen(DNA_sequence);
    stored_RNA_of_main_DNA_chain = malloc(len + 1);
    if (!stored_RNA_of_main_DNA_chain)
    {
        perror("Failed to allocate memory for stored_RNA_of_complementary_chain \n");
        exit(1);
    }
    while(i < len)
    {
            stored_RNA_of_main_DNA_chain[i] =  get_complementary_RNA_base(DNA_sequence[i]);
        i++;
    }
    printf("The RNA chain of main Sequence is : %s \n", stored_RNA_of_main_DNA_chain);
    stored_RNA_of_main_DNA_chain[i] = '\0';
}