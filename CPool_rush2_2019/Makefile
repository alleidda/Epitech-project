##
## EPITECH PROJECT, 2019
## Rush2
## File description:
## What language is this?
##

SRC	=	rush.c

OBJ	=	$(SRC:.c=.o)

NAME	=	rush2

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L./lib/my -lmy -I../include/ -W -Wextra -Wall -Werror -g

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: 	fclean all
