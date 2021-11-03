/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** display the given string
*/

#include <unistd.h>

int my_strlen(char *str);

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}