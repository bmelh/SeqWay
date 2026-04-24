#include "seq_lib.h"

/* print_ll_array

* Prints an array bthat holds numeric locations

*input : array of locations (long long *)

*output : (nill)

**README :
        make use across material
*/

void    print_ll_array(long long *f_array)
{
    int i;

    i = 0;
    printf("%lli-",f_array[i]);
    i++;
    while (f_array[i])
    {
        printf("%lli-",f_array[i]);
        i++;
    }
    printf("\n");
}

