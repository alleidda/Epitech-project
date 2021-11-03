/*
** EPITECH PROJECT, 2019
** my_putstr
** File description:
** Display a string
*/

#include <stddef.h>
#include "my.h"

    void my_putstr(char const *str)
{
    if (str == NULL)
        return ;
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}
