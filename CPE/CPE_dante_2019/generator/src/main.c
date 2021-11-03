/*
** EPITECH PROJECT, 2020
** main.c
** File description:
** dante
*/

#include "../include/generator.h"

int main(int ac, char **av)
{
    if (ac < 3 || ac > 4)
        return (84);
    if (atoi(av[1]) <= 2 || atoi(av[2]) <= 2)
        return (84);
    if (ac == 4 && strcmp(av[3], "perfect") != 0 &&
        strcmp(av[3], "imperfect") != 0)
        return (84);
    return (0);
}
