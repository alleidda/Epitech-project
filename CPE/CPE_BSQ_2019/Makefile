##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC     :=	bsq.c	\
		main.c	\
		my_putchar.c

OBJ     :=       $(SRC:.c=.o)

NAME    :=       bsq

CFLAGS  :=      -W -Wall ##-ansi -pedantic -g -std=c99 -Wno-unused-variable -Wno-unused-parameter

FILE    :=      struct.h

all:    $(NAME)

$(NAME):        $(OBJ)
		$(CC) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re:     fclean all
