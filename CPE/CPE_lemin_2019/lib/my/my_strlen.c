/*
** EPITECH PROJECT, 2018
** my_strlen.c
** File description:
** Count the number of characters in a given  string.
*/

int my_strlen(char *str)
{
    int i;

    for (i = 0; str[i] != '\0'; i++);
    return (i);
}
