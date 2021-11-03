##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## cmd
##

SRC	=	./src/main.c


OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	-Wall -Werror -Wextra -pedantic -std=c99 \
		-I include -ggdb3 -Ofast

LDFLAGS	+=	-lm

NAME	=	generator

all:		$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(CFLAGS) $(OBJ) $(LDFLAGS)
		cp $(NAME) ../tournament/$(NAME)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)
		rm -f ../tournament/$(NAME)

re:		fclean all

.PHONY:		all clean fclean re
