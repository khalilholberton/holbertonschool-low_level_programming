#include "holberton.h"

/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
char c;
int x = 0;

while (x < 10)
{
c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n');
x++;
}
}

