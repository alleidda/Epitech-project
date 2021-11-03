/*
** EPITECH PROJECT, 2019
** rush-2
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

void my_print_char(char a, char b, char c, char x)
{
    for (int i = 0; i < x; i++)
        if (i == 0)
            my_putchar(a);
        else if (i == x-1)
            my_putchar(c);
        else
            my_putchar(b);
}

void rush(int x, int y)
{
    if (x <= 0 || y <= 0) {
        my_putstr("Invalid size\n");
        return ;
    }
    for (int i = 0; y > i; i++) {
        if (x == 1 || y == 1)
            my_print_char('B', 'B', 'B', x);
        else if (i == 0 || i == y-1)
            my_print_char('A', 'B', 'C', x);
        else
            my_print_char('B', ' ', 'B', x);
        my_putchar('\n');
    }
}
