#include "seq_lib.h"

int main(int argc, char **argv)
{
    if(argc != 2)
    {
        printf("Argument error");
        return(0);
    }
    while(1)
    {
    main_menu(argv[1]);
    }
   return(0);
}