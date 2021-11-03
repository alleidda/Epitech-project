/*
** EPITECH PROJECT, 2020
** get_next_line
** File description:
** get_next_line
*/

#include "get_next_line.h"

int fill_line(char *buf, char *line)
{
    int j = 0;

    while (buf[j] != '\n' && buf[j])
    {
        line[j] = buf[j];
        j++;
    }
    return (j);
}

char *get_next_line(int fd)
{
    static char	buf[2];
    char *line;
    int a;

    buf[0] = 0;
    while (1)
    {
        a = read(fd, buf, 32000);
        if ((a == -1) || (buf[0] == 0 ))
        return (NULL);
        line = malloc(sizeof(char) * (a + 1));
        if (line == NULL)
        return (NULL);
    line[(fill_line(buf, line))] = 0;
    return (line);
    }
}
