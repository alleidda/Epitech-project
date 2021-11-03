/*
** EPITECH PROJECT, 2019
** my_atoi.c
** File description:
** convert str to integer
*/
#include <stdio.h>

int my_atoi(char *str)
{
    int i = 0;
    int n = 0;

    while (str[i] != '\0') {
        if (str[i] > '9' || str[i] < '0'){
            if (str[i] == '-')
                i++;
            else
                return (84);
        }
        n = (n + (str[i] - 48)) * 10;
        i++;
    }
    n = n / 10;
    if (str[0] == '-')
        n = n * -1;
    return (n);
}
