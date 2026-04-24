#include "../seq_lib.h"

/* Is Base

* Checksif the character is a DNA base ACTG

*input : DNA Base (char)

*output : 1 if ACTG / 0 if else

**README :
        Checks that the base is either A C T or G
*/

bool ACIDE_is_base(char base)
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
            Checks that the DNA only contains ACTG
*/
void ACIDE_sequence_checker(char *sequence)
{
    int i;
    long long seq_len;

    seq_len = ft_strlen(sequence);
    i = 0;
    while(i < seq_len)
    {
        if (!ACIDE_is_base(sequence[i]))
            {   
                printf("Sequence Failure : unrecognised base");
                exit(1);
            }
            i++;
    }
}
    