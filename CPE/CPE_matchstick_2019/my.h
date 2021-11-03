/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** a
*/

#ifndef MY_H_
#define MY_H_

void my_putchar (char c);
int my_put_nbr(int nb);
void my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_put_nbr_base(int nb, char const *base);
char *my_memset(char *str, char c, int n);
void display(int size, int *tab);
void display_stars(int size);
void display_line(int size, int stick, int line, int stick_init);
void get_line(int *tab, int size);
void get_line2(char *buffer1, char *buffer2, int *tab, int size);
void count(int size, int *tab);
void m_turn(int *tab, int size);
int is_negative(char const *str, int is_neg);
void check_error1(int *tab, int size, char *buf1);
void get_error1(int *tab, int size);
void check_error2(int *tab, int size, char *buf1);
void get_error2(int *tab, int size);
void text(int line , int content);

#endif /* MY_H_ */
