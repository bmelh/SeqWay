#ifndef SEQ_LIB_H
#define SEQ_LIB_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

/*RNA*/
char get_complementary_RNA_base(char base);
/*DNA */
char get_complementary_DNA_base(char base);
void DNA_complementary_chain(char *sequence);
void  DNA_to_RNA_converter_main(char *sequence);
void  DNA_to_RNA_complementary(char *sequence);
/* PARSING SEQUENCES FOR ERRORS*/
void DNA_sequence_checker(char *sequence);
void RNA_sequence_checker(char *sequence);
void ACIDE_sequence_checker(char *sequence);
/* UTILS*/
bool DNA_is_base(char base);
bool RNA_is_base(char base);
bool ACIDE_is_base(char base);
/* AMOUNT AND RATIOUS*/
void DNA_base_number_and_ratios(char *sequence);
void RNA_base_number_and_ratios(char *sequence);
void ACIDE_base_number_and_ratios(char *sequence);
/* COMMON UTILS*/
long long int ft_strlen(char *sequence);
void search_for_sequence_A(char *parent);
void search_for_sequence_A_all(char *parent);
void print_ll_array(long long *f_array);
long long strict_highest_GC_ratio(char *sequence);
/* SPECIFIC MENUS*/
void DNA_menu(char *sequence);
void RNA_menu(char *sequence);
void ACIDE_menu(char *sequence);
/*HUMMING METHOD*/
void search_for_sequence_Humming(char *sequence);
/*MAIN*/
void main_menu(char *sequence);
/*ERROR HANDLERS*/
void target_sup_seq();


#endif