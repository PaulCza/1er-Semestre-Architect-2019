##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## oh bordel
##

SRC	=	reflection.c		\
		helper.c		\
		main.c			\
		scaling.c		\
		translation.c		\
		rotation.c		\

TESTS	=	reflection.c		\
		helper.c		\
		scaling.c		\
		translation.c		\
		rotation.c		\
		tests/test_architect.c	\

NAME	= 102architect

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) -lm
	rm -f $(OBJ)

tests_run:
	gcc -o unit_tests  $(TESTS) -lm -lcriterion --coverage
	./unit_tests

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

