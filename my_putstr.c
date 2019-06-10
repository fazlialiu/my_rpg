/*
** EPITECH PROJECT, 2018
** my_putstr
** File description:
** my_putstr
*/

#include "include/my.h"

void my_putstr(char *str)
{
    int	a = 0;

    while (str[a] != '\0') {
        my_putchar(str[a]);
        a++;
    }
}
