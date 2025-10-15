#include "seq_lib.h"

void search_for_sequence_Humming(char *sequence)
{
    long long int i = 0;
    long long int j = 0,humming_value = 0;
    long long int seq_len = strlen(sequence);
    char *target =  NULL;
    long long int target_len = 0,ret;

    printf("Insert the Target sequence\n");
    ret = getline(&target, (size_t *)&target_len,stdin);
    if(ret == -1)
        printf("Get line error Target sequence \n");
    printf("Insert the  Humming Value\n");
    scanf("%lli", &humming_value);

    if (humming_value >= target_len || humming_value < 0)
    {
        target_sup_seq();
    }    
    while(i < seq_len - target_len + 1)
    {
        j = 0;
        while (j < target_len)
        {
            if (sequence[i+j] != target[j])
                break;
            j++;
        }
        if (j >= target_len - humming_value)
        {
            printf("First Occurence of target found in Sequence at position %lli and Humming value of %lli",i,target_len - j);
            free(target);
            return;
        }
        i++;
    }
    free(target);
    printf("Target not found in sequence using with Humming Value of %lli",humming_value);
}