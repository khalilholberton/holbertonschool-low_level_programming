#include "holberton.h"
/**
 * clear_bit - function that sets the value of a bit to 0 at a given index.
 * @n: given number.
 * @index: unsigned int type
 * Return: integer
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 31)
return (-1);
*n = (~(1 << index)) & *n;
return (1);
}
