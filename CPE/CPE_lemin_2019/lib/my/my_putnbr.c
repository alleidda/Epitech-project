/*
** EPITECH PROJECT, 2019
** my_putnbr.c
** File description:
** display the given integer
*/

void my_putchar(char c);

void my_putnbr(int n)
{
    int nb = '0';
    int i = 0;
    char result[7];

    while (n > 0) {
        result[i] = ((n % 10) + nb);
        n = n - (n % 10);
        n = n / 10;
        i++;
    }
    while (i > 0) {
        my_putchar(result[i - 1]);
        i--;
    }
}