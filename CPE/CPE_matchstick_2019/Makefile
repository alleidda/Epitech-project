##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Cmp
##

NAME = match

SRC = main.c\
	my_strlen.c\
	my_putchar.c\
	my_putstr.c\
	my_getnbr.c\
	display.c\
	y_turn.c\
	m_turn.c\
	my_memset.c\
	count.c\
	my_put_nbr.c\
	check_error1.c\
	check_error2.c


CFLAGS = -Wall -Wextra -g

OBJ  = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	gcc $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
