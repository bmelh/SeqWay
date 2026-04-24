#include "../seq_lib.h"

/*Global variable used to store complementary DNA chain for future USE*/
char *stored_complementary_DNA_chain = NULL;


/* DNA_complementary_chain

* Returns the complementary DNA chain

*input : DNA Sequence (char *)

*output : complementary DNA Sequence (char *)

**README :
            ADD unrecognised bases and IUPAC Values
*/

void DNA_complementary_chain(char *DNA_sequence)
{
    long long int len,i = 0;

    if(stored_complementary_DNA_chain)
        free(stored_complementary_DNA_chain);
    len = (long long int) strlen(DNA_sequence);
    stored_complementary_DNA_chain = malloc(len + 1);
    if (!stored_complementary_DNA_chain)
    {
        perror("Failed to allocate memory for stored_complementary_DNA_chain \n");
        exit(1);
    }
    while(i < len)
    {
        stored_complementary_DNA_chain[i] = get_complementary_DNA_base(DNA_sequence[i]);
        i++;
    }
    stored_complementary_DNA_chain[i] = '\0';
    printf("The complementary DNA chain is : %s \n", stored_complementary_DNA_chain);
}