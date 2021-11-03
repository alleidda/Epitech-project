/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** minishell1
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int my_str_to_wordtab(char *str, char letter)
{
    int i;

    for (i = 0; str[i] == letter; i++); 
}

int main(int ac, char **av)
{
    char *str;
    char **tab;

    my_str_to_wordtab(str, ' ');
}