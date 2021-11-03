/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h of lemin project
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

char **create_map();
void my_putstr(char *str);
void my_put_nbr(int n);
void my_putchar(char c);
int my_strlen(char *str);
int my_atoi(char *str);
int my_strcmp(char *str1, char *str2);
char *get_next_line(const int fd);