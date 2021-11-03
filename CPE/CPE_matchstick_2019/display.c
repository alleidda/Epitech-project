/*
** EPITECH PROJECT, 2020
** display.c
** File description:
** display
*/

#include <stdlib.h>
#include <stdio.h>
#include "my.h"

void display(int size, int *tab)
{
    int stick = 1;

    display_stars(size);
    for (int i = 0; i < size; i++) {
        display_line(size, tab[i], i, stick);
        stick += 2;
    }
    display_stars(size);
    my_putchar('\n');
}

void display_stars(int size)
{
    char tab_stars[200] = {0};

    for (int i = 0; i < size * 2 + 1; i++) {
        tab_stars[i] = '*';
    }
    my_putstr(tab_stars);
    my_putchar('\n');
}

void display_line(int size, int stick, int line, int stick_init)
{
    int space = ((size * 2) / 2) - line - 1;

    my_putchar('*');
    for (int i = 0; i < space; i++)
        my_putchar(' ');
    for (int i = 0; i < stick_init; i++) {
        if (i >= stick)
            my_putchar(' ');
        else
            my_putchar('|');
    }
    for (int i = 0; i < space; i++)
        my_putchar(' ');
    my_putchar('*');
    my_putchar('\n');
}
