NAME = seq_analyser

SRC = main.c\
		main_menu.c\
		parsing.c\
		displayers.c\
		COMMON_utils.c\
		DNA/DNA_menu.c\
		DNA/DNA_complementary_chain.c\
		DNA/DNA_seq_composition.c\
		DNA/DNA_utils.c\
		RNA/RNA_seq_composition.c\
		RNA/RNA_utils.c\
		RNA/RNA_main_chain_converter.c\
		RNA/RNA_complementary_chain_converter.c\
		PROT/PROT_seq_composition.c\
		PROT/PROT_utils.c\
		ERROR_handler.c\
		HUMMING_utils.c

OBJ = $(SRC:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror 

%.o: %.c $(DEPS)
	$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	$(CC) $(OBJ)  -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
