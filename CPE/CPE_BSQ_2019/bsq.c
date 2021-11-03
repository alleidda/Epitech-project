/*
** EPITECH PROJECT, 2019
** bsq
** File description:
** bsq
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "bsq.h"
#include "my.h"

int open_file(char *filepath, int *line_count, int *col_count)
{
    int file = open(filepath, O_RDONLY);
    int rc = 0;
    int bc = 0;
    struct stat file_stat;
    char buffer[1];
    int digit;
    
    if (file == -1)
        return (84);
    if (stat(filepath, &file_stat) < 0)    
        return (84);
    read(file, buffer, 1);
    bc++;
    while (buffer[0] != '\n') {
        digit = buffer[0] - '0';
        rc = 10 * rc + digit;
        bc++;
        read(file, buffer, 1);
    }
    *line_count = rc;
    *col_count = -1 + (file_stat.st_size - bc) / rc;
    return (file);
}

int **read_m(int file, int line_count, int col_count)
{
    int l_size = 0;
    char* buffer;
    int** result;
    int rn = 0;
    int cn = 0;
    
    result = malloc(sizeof(int*) * line_count);
    l_size = sizeof(char) *  (col_count + 1);
    buffer = malloc(l_size);
    for (rn = 0; rn < line_count; rn++) {
        read(file, buffer, l_size);
        result[rn] = malloc(sizeof(int) * col_count);
        for (cn = 0; cn < col_count; cn++)
            result[rn][cn] = buffer[cn] == '.' ? 1 : 0;
    }
    free(buffer);
    close(file);
    return (result);
}

int **transform_m(int **matrix, int line_count, int col_count)
{
    int i = 0;
    int j = 0;
    int** replaced = malloc(sizeof(int*) * line_count);
    
    for (i = 0; i < line_count; i++) {
        replaced[i] = malloc(sizeof(int) * col_count);
        replaced[i][0] = matrix[i][0];
    }
    for (j = 0; j < col_count; j++)
        replaced[0][j] = matrix[0][j];
    for (i = 1; i < line_count; i++) {
        for (j = 1; j < col_count; j++) {
            replaced[i][j] = matrix[i][j] == 1 ? min(replaced[i][j - 1],
                                                        replaced[i - 1][j], replaced[i - 1][j - 1]) + 1
                : 0;
        }
    }
    return (replaced);
}

mat find_max(int **replaced, int line_count, int col_count)
{
    mat result;
    int i = 0;
    int j = 0;
    result.size_square = 0;
    result.x_max = 0;
    result.y_max = 0;
    for (i = 0; i < line_count; i++) {
        for (j = 0; j < col_count; j++) {
            if (result.size_square < replaced[i][j]) {
                result.size_square = replaced[i][j];
                result.x_max = i;
                result.y_max = j;
            }
        }
    }
    return (result);
}
