#-----------------MAKEFILE------------------
#--------------------------------------------
# VARIABLES FOR DOT C

TEST = ft_test.c

#--------------------------------------------
# VARIABLES FOR DOT O
TEST_OBJ = $(TEST_OBJ:.c=.o)
#--------------------------------------------
# VARIABLES FOR DO A COMPILATION
CC = gcc 

CFLAGS = -Wall -Werror -Wextra

NAME	=	push_swap

RM = rm -rf

#-----------------EXECUTING------------------
#--------------------------------------------

all : $(NAME)


$(NAME) : $(TEST_OBJ)
	$(CC) $(CFLAGS) $(TEST_OBJ) -o $(NAME)

clean :
	$(RM) $(TEST_OBJ)

fclean :	clean
	$(RM) $(NAME)

re :	fclean all

.PHONY :	all clean fclean re
#--------------------------------------------