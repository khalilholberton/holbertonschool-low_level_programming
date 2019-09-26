#include "holberton.h"
/**
 * print_triangle -print a triangle, followed by a new line.
 *@size : int size of triangle.
 * Return: Always 0.
 */
void print_triangle(int size)
{
int i, j, k;
if (size <=  0)
_putchar('\n');
for (i = 0; i < size; i++)
{
for (j = size; j > i + 1; j--)
_putchar(' ');
for (k = 0; k < j; k++)
_putchar('#');
_putchar('\n');
}
}
