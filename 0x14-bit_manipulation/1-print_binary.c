#include "holberton.h"

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: number to print.
 */
void print_binary(unsigned long int n)
{
unsigned long int num = n;
if (num > 1)
print_binary(num >> 1);
_putchar((num & 1) + '0');
}
