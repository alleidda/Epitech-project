##
## EPITECH PROJECT, 2020
## CPE_lemin_2019
## File description:
## Makefile
##

NAME	=	lem_in

SRC	=	src/lemin.c 		\
		src/create_map.c 	\

OBJ	=	$(SRC:.c=.o)

LDFLAGS	=	-L lib/my	\
		-l my -lm

CFLAGS	=	-g -W -Wall -ansi -pedantic -Wextra -I include -std=gnu99

all:		lib $(NAME)

lib:
		make -C lib/my

lib-clean:
		make -C lib/my clean

lib-fclean:
		make -C lib/my fclean

$(NAME):	$(OBJ)
		gcc $(OBJ) -o $(NAME) $(CFLAGS) $(LDFLAGS)
		rm $(OBJ)

clean:		lib-clean
		rm -f $(OBJ)
		rm -f *~ \#*\#

fclean:		lib-fclean clean
		rm -f $(NAME)

re:		fclean all

.PHONY:		all lib lib-clean lib-fclean clean fclean re