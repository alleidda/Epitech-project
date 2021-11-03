/*
** EPITECH PROJECT, 2019
** my_memset
** File description:
** m
*/

char *my_memset(char *str, char c, int n)
{
    int i = 0;
    for (i = 0; i < n; i++)
        str[i] = c;
    return (str);
}
