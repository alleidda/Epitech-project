/*
** EPITECH PROJECT, 2020
** check_error2.c
** File description:
** check_error
*/

#include "my.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

void get_error2(int *tab, int size)
{
    size_t bufsize = 3;
    char *buf1 = malloc(bufsize * sizeof(char));
    int nb1 = 0;

    my_putstr("Matches: ");
    my_memset(buf1, 0, 3);
    nb1 = getline(&buf1, &bufsize, stdin);
    if (nb1 == -1)
        return;
    check_error2(tab, size, buf1);
}

void check_error2(int *tab, int size, char *buf1)
{
    if (my_getnbr(buf1) == 0) {
        if (buf1[0] == '0') {
        my_putstr("Error: you have to remove at least one match\n");
        get_error1(tab, size);
        get_error2(tab, size);
        } else {
            my_putstr("Error: invalid input (positive number expected)\n");
            get_error1(tab, size);
            get_error2(tab, size);
        }
    }
}
