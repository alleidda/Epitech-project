/*
** EPITECH PROJECT, 2020
** count.c
** File description:
** count
*/

#include <stdlib.h>
#include "my.h"

void count (int size, int *tab)
{
    int compt = 1;

    tab = malloc(sizeof(int) * (size + 1));
    for (int i = 0; i < size; i++) {
        tab[i] = compt;
        compt += 2;
    }
    tab[size] = -1;
    display(size, tab);
    get_line(tab, size);
    free(tab);
}
