/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

void my_putchar(char c);
//int my_putstr(char const *str);
//int my_strlen(char const *str);
int main(int ac, char **av);
int read_file(char *filepath);
int **read_m(int file, int line_count, int col_count);
int **transform_m(int **matrix, int line_count, int col_count);
mat find_max(int **transform, int line_count, int col_count);
int min(int a, int b, int c);
void display_max(int **matrix, mat max, int line_count, int col_count);
int open_file(char *filepath, int *line_count, int *col_count);

#endif /* MY_H_ */
