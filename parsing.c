#include "seq_lib.h"

long long int ft_strlen(char *sequence)
{
    long long int i;

    i = 0;
    while(sequence[i])
        i++;
    return(i);
}



