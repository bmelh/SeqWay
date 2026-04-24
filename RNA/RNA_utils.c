#include "../seq_lib.h"

/* RNA Is Base

* Checksif the character is a RNA base ACUG

*input : RNA Base (char)

*output : 1 if ACUG / 0 if else

**README :
        Checks that the base is either A C U or G
*/
bool RNA_is_base(char base)
{
    if(base == 'A'|| base == 'C'|| base == 'U'|| base == 'G')
            return(1);
        return(0);
}

/* RNA_sequence_checker

* Checksif the Input RNA iscorrectly formated ACUG only

*input : RNA Sequence (char *)

*output : exits if other then ACUG in parent sequence

**README :
            Checks that the RNA only contains ACUG
*/
void RNA_sequence_checker(char *sequence)
{
    int i;
    long long seq_len;

    seq_len = ft_strlen(sequence);
    i = 0;
    while(i < seq_len)
    {
        if (!RNA_is_base(sequence[i]))
            {   
                printf("RNA Sequence Failure : unrecognised base");
                exit(1);
            }
            i++;
    }
}
/* get_complementary_RNA_base

* Returns the complementary RNA base

*input : RNA BASE (char)

*output : complementary RNA Base (char)

**README :
            ADD unrecognised bases and IUPAC Values if exists for RNA
*/
char get_complementary_RNA_base(char base)
{
    switch (base)
    {
    case 'A':
        return('U');
        break;
    case 'U':
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
    