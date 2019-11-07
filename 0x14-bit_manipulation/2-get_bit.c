#include "holberton.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: unsigned long int type.
 * @index: unsigned long int
 * Return: integer
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 31)
return (-1);
return ((n >> index) & 1);
}
