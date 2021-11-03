/*
** EPITECH PROJECT, 2019
** Rush2
** File description:
** Frequencies
*/

int count_letters(char const *str)
{
    int letters = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' || \
            str[i] >= 'A' && str[i] <= 'Z') {
            letters++;
        }
    }
    return (letters);
}

void calc_percent(char const *str, int count)
{
    float total = 0;
    float result = 0;
    int temp = 0;

    total = (float)count_letters(str);
    result = ((float)count / total) * 100;
    temp = (int)result;
    result -= (float)temp;
    my_put_nbr(temp);
    result *= 100;
    my_putchar('.');
    my_put_nbr((int)result);
    if (result < 10)
        my_putchar('0');
    my_putchar('%');
}

void check_letters(char const *str, char letter)
{
    int count = 0;
    int letter2 = 0;

    if (letter >= 'a' && letter <= 'z')
        letter2 = letter - 32;
    else if (letter >= 'A' && letter <= 'Z')
        letter2 = letter + 32;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == letter || str[i] == letter2) {
            count++;
        }
    }
    my_putchar(letter);
    my_putchar(':');
    my_put_nbr(count);
    my_putstr(" (");
    calc_percent(str, count);
    my_putstr(")\n");
}

int main(int argc, char **argv)
{
    for (int i = 2; i < argc; i++) {
        if (my_strlen(argv[i]) != 1)
            return (84);
        check_letters(argv[1], argv[i][0]);
    }
    return (0);
}
