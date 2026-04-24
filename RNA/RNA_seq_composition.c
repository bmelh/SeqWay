#include "../seq_lib.h"

void RNA_base_number_and_ratios(char *sequence)
{
    int i;
    long long int A = 0,C = 0,U = 0,G = 0;
    long double ratio[4];
    long double len;

    len = (double long) strlen(sequence);
    i = 0;
    while(sequence[i])
    {
        if(sequence[i] == 'A')
            A++;
        else if(sequence[i] == 'U')
            U++;
        else if(sequence[i] == 'C')
            C++;
        else if(sequence[i] == 'G')
            G++;
        i++;
    }
    printf("A : %lli  \nC : %lli   \nU : %lli \nG : %lli \n",A,C,U,G);
    if(ft_strlen(sequence) != 0)
    {
    ratio[0] = (double long) A  / len * 100.0;
    ratio[1] = (double long) G  / len * 100.0;
    ratio[2] = (double long) U  / len * 100.0;
    ratio[3] = (double long) C  / len * 100.0;
    }
    printf("--------------------------------------\nPercentages\n");
    printf("A : %.2Lf %% \nC : %.2Lf %%  \nU : %.2Lf %%\nG : %.2Lf %%\n",ratio[0],ratio[1],ratio[2],ratio[3]);
}

