/*
** EPITECH PROJECT, 2018
** my_putchar
** File description:
** lib
*/

#include "include/my.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
