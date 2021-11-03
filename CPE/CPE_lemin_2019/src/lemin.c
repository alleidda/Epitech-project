/*
** EPITECH PROJECT, 2020
** ECHFETI
** File description:
** lemin
*/

#include "my.h"

int display(char **map)
{
    int i = 0;

    if (map[0][0] < '0' && map[0][0] > '9')
        return (84);
    my_putstr("#number_of_ants\n");
    for (int y = 0; map[y] != NULL; y++) {
        if (map[y][0] == '#' && map[y][1] != '#')
            continue;
        if (map[y][0] >= '0' && map[y][0] <= '9'
        && map[y][1] == '-' && i == 0) {
            my_putstr("#tunnels\n");
            i = i - 1;
        }
        my_putstr(map[y]);
        my_putchar('\n');
        if (y == 0)
            my_putstr("#rooms\n");
    }
    return (0);
}

int main(void)
{
    int i = 0;
    char **map;

    map = create_map();
    if (map[0] == NULL)
        return (84);
    i = display(map);
    return (i);
}
