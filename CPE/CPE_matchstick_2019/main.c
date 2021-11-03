/*
** EPITECH PROJECT, 2020
** matchstick
** File description:
** match
*/

#include "my.h"
#include <stdlib.h>
#include <sys/types.h>
#include <stdio.h>
#include <unistd.h>
#include <stddef.h>

int main(int ac, char **av)
{
    int size;
    int stick;
    int *tab = NULL;

    if (ac != 3)
        return (84);
    else if (ac == 3) {
        size = my_getnbr(av[1]);
        stick = my_getnbr(av[2]);
        if (size < 1 || size > 99 || stick <= 0)
            return (84);
        else
            count(size, tab);
    }
    return (0);
}
