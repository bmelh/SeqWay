#include "../seq_lib.h"

/* DNA_base_number_and_ratios
    
*/
void DNA_base_number_and_ratios(char *sequence)
{
    int i;
    long long int A = 0,C = 0,T = 0,G = 0;
    long double ratio[4];
    long double len;

    len = (double long) strlen(sequence);
    i = 0;
    while(sequence[i])
    {
        if(sequence[i] == 'A')
            A++;
        else if(sequence[i] == 'T')
            T++;
        else if(sequence[i] == 'C')
            C++;
        else if(sequence[i] == 'G')
            G++;
        i++;
    }
    printf("\n--------------DNA Base Content ---------------\n");
    printf("A : %lli  \nC : %lli   \nT : %lli \nG : %lli \n",A,C,T,G);
    if(ft_strlen(sequence) != 0)
    {
    ratio[0] = (double long) A  / len * 100.0;
    ratio[1] = (double long) G  / len * 100.0;
    ratio[2] = (double long) T  / len * 100.0;
    ratio[3] = (double long) C  / len * 100.0;
    }
    printf("------------------DNA Base Ratios----------------\n");
    printf("A : %.2Lf %% \nC : %.2Lf %%  \nT : %.2Lf %%\nG : %.2Lf %%\n",ratio[0],ratio[1],ratio[2],ratio[3]);
    printf("-------------------------------------------------\n");
}


