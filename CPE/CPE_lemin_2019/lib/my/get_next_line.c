/*
** EPITECH PROJECT, 2018
** get_next_line.c
** File description:
** get_next_line
*/

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "get_next_line.h"

char *next_buffer(int fd, char *line, int *rd)
{
    char *buffer = NULL;

    if (*rd == -2)
        return (NULL);
    buffer = malloc(sizeof(char) * (READ_SIZE + 1));
    *rd = read(fd, buffer, READ_SIZE);
    if (*rd <= -1 || !buffer)
        return (NULL);
    buffer[*rd] = 0;
    if (*rd == 0 && line[0] != 0) {
        *rd = -1;
        return (buffer);
    } else if (*rd == 0 && buffer[0] == 0)
        return (NULL);
    return (buffer);
}

char *allocate_memory(char *buffer, int fd, int *rd)
{
    if (!buffer) {
        buffer = malloc(sizeof(char) * (READ_SIZE + 1));
        if (!buffer)
            return (NULL);
        *rd = read(fd, buffer, READ_SIZE);
        if (*rd < 0)
            return (NULL);
        buffer[*rd] = 0;
    }
    return (buffer);
}

char *my_strcat(char *s1, char *s2)
{
    unsigned int a = 0;
    unsigned int b = 0;
    unsigned int i = 0;
    char *str;

    for (; s1[a] != 0; a++);
    i = a;
    for (a = 0; s2[a] != 0 && s2[a] != '\n'; a++);
    i = i + a;
    str = malloc(sizeof(char) * (i + 1));
    if (str == NULL)
        return (NULL);
    for (unsigned int d = 0; s1[d] != 0; d++, b++)
        str[b] = s1[d];
    for (unsigned int e = 0; s2[e] != 0 && s2[e] != '\n'; e++, b++)
        str[b] = s2[e];
    str[i] = '\0';
    return (str);
}

char *adv_buff(char *buff)
{
    for (; buff[0] != '\n' && buff[0] != 0; buff++);
    buff++;
    return (buff);
}

char *get_next_line(int fd)
{
    char *line = malloc(sizeof(char) * 1);
    static char *buffer = NULL;
    static int rd = 0;

    buffer = allocate_memory(buffer, fd, &rd);
    if (!buffer || !line || fd < 0 || rd == -2)
        return (NULL);
    line[0] = 0;
    for (int i = 0; buffer[i] != '\n' && line && rd > -1; i++)
        for (; i != -1 && buffer[i] == 0 && line && rd > -1; i = -1) {
            line = my_strcat(line, buffer);
            buffer = next_buffer(fd, line, &rd);
            if (!buffer)
                return (NULL);
        }
    line = my_strcat(line, buffer);
    buffer = adv_buff(buffer);
    for (; rd == -1; rd = -2);
    return (line);
}
