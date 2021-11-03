/*
** EPITECH PROJECT, 2020
** m_turn.c
** File description:
** m_turn
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void m_turn(int *tab, int size)
{
    int nb1;
    int nb2;

    srandom(time(NULL));
    nb1 = random() % size + 1;
    nb2 = random() % tab[nb1] + 1;
    my_putstr("AI's turn...\nAI removed ");
    my_put_nbr(nb1);
    my_putstr(" match(es) from line ");
    my_put_nbr(nb2);
    my_putchar('\n');
    tab[nb1] = nb2;
    display(size, tab);
    get_line(tab, size);
}
