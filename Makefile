#-----------------MAKEFILE------------------
#--------------------------------------------
# VARIABLES FOR DOT C

# TEST = ft_verification_conversion/ft_verification.c ft_verification_conversion/ft_conversion.c

FT_PRINTF	= ft_printf/ft_printf.c ft_printf/ft_void_percent.c ft_printf/ft_string_letters.c \
				ft_printf/ft_numbers_base_ten.c ft_printf/ft_numbers_base_sixteen.c ft_printf/ft_external_functions.c \

TEST = ft_verification_conversion/listes_chainees.c

#--------------------------------------------
# VARIABLES FOR DOT O
TEST_OBJ = $(TEST:.c=.o)
FT_PRINTF_OBJ = $(FT_PRINTF:.c=.o)
#--------------------------------------------
# VARIABLES FOR DO A COMPILATION
CC = gcc 

CFLAGS = -Wall -Werror -Wextra

NAME	=	push_swap

RM = rm -rf

#-----------------EXECUTING------------------
#--------------------------------------------

all : $(NAME)


$(NAME) : $(TEST_OBJ) $(FT_PRINTF_OBJ)
	$(CC) $(CFLAGS) $(TEST_OBJ) $(FT_PRINTF_OBJ) -o $(NAME)

clean :
	$(RM) $(TEST_OBJ) $(FT_PRINTF_OBJ)

fclean :	clean
	$(RM) $(NAME)

re :	fclean all

.PHONY :	all clean fclean re
#--------------------------------------------