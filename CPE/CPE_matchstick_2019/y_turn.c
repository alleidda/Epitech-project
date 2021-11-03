/*
** EPITECH PROJECT, 2020
** game.c
** File description:
** game
*/

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "my.h"

void text(int line, int content)
{
    my_putstr("Player removed ");
    my_put_nbr(content + 1);
    my_putstr(" match(es) from line ");
    my_put_nbr(line + 1);
    my_putchar('\n');
}

void get_line2(char *buffer1, char *buffer2, int *tab, int size)
{
    int line = 0;
    int content = 0;

    line = my_getnbr(buffer1) - 1;
    content = tab[my_getnbr(buffer1) - 1] - my_getnbr(buffer2);
    tab[line] = content;
    text(line, content);
    display(size, tab);
    m_turn(tab, size);
}

void get_line(int *tab, int size)
{
    size_t bufsize = 3;
    char *buffer1 = malloc(bufsize * sizeof(char));
    char *buffer2 = malloc(bufsize * sizeof(char));

    my_putstr("Your turn:\nLine: ");
    my_memset(buffer1, 0, 3);
    my_memset(buffer2, 0, 3);
    if ((getline(&buffer1, &bufsize, stdin)) == -1)
        return;
    check_error1(tab, size, buffer1);
    my_putstr("Matches: ");
    if (getline(&buffer2, &bufsize, stdin) == -1)
        return;
    check_error2(tab, size, buffer2);
    get_line2(buffer1, buffer2, tab, size);
}
