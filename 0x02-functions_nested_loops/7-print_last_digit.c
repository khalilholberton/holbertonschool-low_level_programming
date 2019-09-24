#include "holberton.h"

/**
 * print_last_digit - selects the last digit of an integer.
 * @x: int type.
 * Return: the absolute value of last digit.
 */
int print_last_digit(int x)
{
int r;
if (x >= 0)
r = x % 10;
else
r = (x % 10) * -1;
_putchar(r + '0');
return (r);
}
