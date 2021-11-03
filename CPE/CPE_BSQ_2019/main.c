/*
** EPITECH PROJECT, 2019
** main.c
** File description:
** main
*/

#include <unistd.h>
#include <stdio.h>
#include "bsq.h"
#include "my.h"

int min(int a, int b, int c)
{
    int m = a;
    
    if (m > b)
        m = b;
    if (m > c)
        m = c;
    return (m);
}

void display_max(int **matrix, mat max, int line_count, int col_count)
{
    int i;
    int j;
    int top_x = max.x_max - max.size_square + 1;
    int top_y = max.y_max - max.size_square + 1;
    
    for (i  = 0; i < line_count; i++) {
        for (j = 0; j < col_count; j++) {
            if (i >= top_x && i <= max.x_max && j >= top_y && j <= max.y_max)
                my_putchar('x');
            else if (matrix[i][j] == 1)
                my_putchar('.');
            else
                my_putchar('o');
        }
        my_putchar('\n');
    }
}

int main (int ac, char **av)
{
    int file;
    int line_count;
    int col_count;
    int **res;
    int **replaced;
    mat max;
    
    if (ac != 2)
        return (84);
    if(av[1] == 0)
        return (84);   
    file = open_file(av[1], &line_count, &col_count);
    res = read_m(file, line_count, col_count);
    replaced = transform_m(res, line_count, col_count);
    max = find_max(replaced, line_count, col_count);
    display_max(res, max, line_count, col_count);
    close(file);
    return (0);
}
