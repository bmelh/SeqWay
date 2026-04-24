#include "seq_lib.h"


/* search_for_sequence_A_all

* Searches for the presence of the exacte input sequence in the Parent DNA

*input : Parent DNA + Asks for target sequence

*output : an Array of positions of found target sequence in the parent DNA

*/
void search_for_sequence_A_all(char *parent)
{
        long long i;
        long long k = 0;
        long long j = 0;
        int flag;
        char *sequence = NULL;
        long long *f_array = NULL;

        printf("Insert the sequence you are looking for\n");
        scanf("%ms", &sequence);
        while(parent[j] != '\0')
        {
                i = 0;
                flag = 0;
                while(sequence[i] != '\0' && flag != 1)
                {
                        if(sequence[i] != parent[j+i])
                                flag = 1;
                        i++;
                }
                if(flag == 0)
                {
                        f_array = realloc(f_array,(k + 1) *sizeof(long long)+1);
                        f_array[k] = j;
                        k++;
                }
                j++;
        }
        f_array[k] = '\0';
        if (k != 0)
        {
                printf("Target sequence found at Locations ");
                print_ll_array(f_array);
        }
        free(f_array);
        free(sequence);
}


/* Search_for_sequence_A

* Searches for the presence of the exacte input sequence in the Parent DNA

*input : Parent DNA + Asks for target sequence

*output : exacte position of the first ocuurence of target sequence in the parent DNA

**README :
        Does not look for truncated version of the target sequence
        ex :
                * parent ACTG
                * target ACTGG
                * output  NOT FOUND
*/

void search_for_sequence_A(char *parent)
{
        long long i;
        int flag;
        long long j = 0;
        char *sequence = NULL;

        printf("Insert the sequence you are looking for\n");
        scanf("%ms", &sequence);
        while(parent[j] != '\0')
        {
                i = 0;
                flag = 0;
                while(sequence[i] != '\0' && flag != 1)
                {
                        if(sequence[i] != parent[j+i])
                                flag = 1;
                        i++;
                }
                if(flag == 0)
                {
                        printf("Sequence Found at location %lli \n",j);
                        free(sequence);
                        return;
                }
                j++;
        }
        printf("Target sequence not found in parent DNA \n");
        free(sequence);
}

/* strict_ighest_GC_Ratio V.01

* Calculates the GC ratio in the sequence given a window of size N using a strict method (max index in sequence == len(seq) - window)

*input : Parent DNA + Size of Window

*output : Index of Starting position with the highest GC ratio in the parent DNA  

**README :
        This  variant only prints the Position with N window range that has the highest GC ratio

**REMARKS : 
        Make a version that outputs GC ratio of each position giving a minimal GC ratio input within N window
        Make a version that prints an array of GC values from each index giving a window N 
        
*/
long long strict_highest_GC_ratio(char *sequence)
{
        long long i,highest_pos = -1,prev_ratio = 0, ratio = 0, curr_pos = 0;
        long long window = 0;

        printf("Insert the  Window Value\n");
        scanf("%lli", &window);

        if (window > (long long int)strlen(sequence) || !window)
        {
                printf("\nWindow is larger then sequence or NULL \n");
                return(0);
        }
        while(curr_pos <= (long long int)strlen(sequence) - window)
        {
                i = 0;
                ratio = 0;
                while(i < window)
                {
                        if(sequence[curr_pos + i] == 'G' || sequence[curr_pos + i] == 'C')
                                ratio++;
                        i++;
                }
                //printf("ratio at index %lli is %lli \n",curr_pos,ratio);
                if (ratio > prev_ratio)
                {
                        prev_ratio = ratio;
                        highest_pos = curr_pos;
                }
                curr_pos++;
        }
        if (highest_pos != -1)
                printf("The highest GC ratio within a window of %lli is at index %lli with a GC count of %lli \n",window,highest_pos,prev_ratio);
        else
                printf("No GC content found within a window of %lli \n",window);
        return(highest_pos);
}