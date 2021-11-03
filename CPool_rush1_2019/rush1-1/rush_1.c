/*
** EPITECH PROJECT, 2019
** rush-1
** File description:
** a
*/

#include <stdlib.h>

void my_putstr(char const *str)
{
    if (str == NULL)
        return ;
    for (int i = 0; str[i] != '\0'; i++)
        my_putchar(str[i]);
}

void my_print_char(char a, char b, char x)
{
    for (int i = 0; i < x; i++)
        if ( i == 0 || i == x-1)
            my_putchar(a);
        else
            my_putchar(b);
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        my_putstr("Invalid size\n");
    return ;
    }
    for (int z = 0; y > z; z++) {
        if (z == 0 || z == y-1)
            my_print_char('o', '-' , x);
        else
            my_print_char('|', ' ', x);
        my_putchar('\n');
    }
}
