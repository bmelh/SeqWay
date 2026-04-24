#include "../seq_lib.h"

/* DNA Is Base

* Checksif the character is a DNA base ACTG

*input : DNA Base (char)

*output : 1 if ACTG / 0 if else

**README :
    Adds check for IUPAC values
*/
bool DNA_is_base(char base)
{
    if(base == 'A'|| base == 'C'|| base == 'T'|| base == 'G')
            return(1);
        return(0);
}

/* DNA_sequence_checker

* Checksif the Input DNA iscorrectly formated ACTG only

*input : DNA Sequence (char *)

*output : exits if other then ACTG in parent sequence

**README :
            Checks that the DNA only contains whqt is considered valid bases (ACTG, N And IUPAC values if added)
*/

void DNA_sequence_checker(char *sequence)
{
    int i;
    long long seq_len;

    seq_len = ft_strlen(sequence);
    i = 0;
    while(i < seq_len)
    {
        if (!DNA_is_base(sequence[i]))
            {   
                printf("DNA Sequence Failure : unrecognised base");
                exit(1);
            }
            i++;
    }
}

/* get_complementary_DNA_base

* Returns the complementary DNA base

*input : DNA BASE (char)

*output : complementary DNA Base (char)

**README :
            ADD  IUPAC Values 
*/

char get_complementary_DNA_base(char base)
{
    switch (base)
    {
    case 'A':
        return('T');
        break;
    case 'T':
        return('A');
        break;
    case 'C':
        return('G');
        break;
    case 'G':
        return('C');
        break;
    default:
        return('N');
        break;
    }
}