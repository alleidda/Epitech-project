##
## EPITECH PROJECT, 2020
## CPE_lemin_2019
## File description:
## Makefile
##

NAME	=	libmy.a

SRC	=	my_atoi.c 			\
		my_putchar.c 		\
		my_putnbr.c 		\
		my_putstr.c 		\
		my_strcmp.c 		\
		my_strlen.c 		\
		get_next_line.c 	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-W -Wall -ansi -pedantic -g -I include -std=c99

all:		$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)
		cp my.h ../../include
		cp libmy.a ../

clean:
		rm -f $(OBJ)
		rm -f *\~

fclean:		clean
		rm -f $(NAME)
		rm -f ../$(NAME)

re:		clean all

.PHONY:		all clean fclean re
