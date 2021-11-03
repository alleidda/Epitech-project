/*
** EPITECH PROJECT, 2019
** tree
** File description:
**
*/

#include <stdlib.h>

void tree(int size);
void my_putchar(char c);

int main(void)
{
    tree(5);
}
void my_print_char(char a, char b, char middle)
{
    int lg;
    int middlep;
    int middlem;
    lg = (middle * 2) - 1;
    for (int i = 0; i < lg ; i++) {
        
        if ( i < middle--)
            my_putchar(a);
        else if (i > middle++)
            my_putchar(b);
        else
            my_putchar(b);
    }
}

    void my_print_star(char a, char b, char middle)
    {
        int lg;
        lg = (middle * 2) - 1;
        for (int i = 0; i < lg ; i++)
            if ( i < middle || i > middle)
                my_putchar(a);
            else
                my_putchar(b);
    }

void tree(int size)
{
    int t= 1;
    int x = 4 + ( t * 2);
    int y = 4;
    int middle = (x / 2) + 1;
    if (x < 0 || y < 0) {
        return ;
    }
    for (int s = 0; s < size; s++) {
        for (int z = 0; y > z; z++) {
            if (z == 0)
                my_print_star(' ', '*', middle);
            else
                my_print_char(' ', '*', middle);
            x = x + 4 + ( t++ * 2);
            my_putchar('\n');
        }
        y += 1;
    }
}
