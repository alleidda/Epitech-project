/*
** EPITECH PROJECT, 2020
** ECHFETI
** File description:
** create_map
*/

#include "my.h"

char **create_map(void)
{
    char **map = malloc(sizeof(char *) * 500);

    for (int x = 0; (map[x] = get_next_line(0)) != NULL; x = x + 1);
    return (map);
}