#include "holberton.h"
/**
 * flip_bits - function that returns the number of
 * bits you would need to flip to get from one number to another.
 * @n: unsigned long int type
 * @m: unsigned long int type
 *
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int fp;
fp = n ^ m;
n = 0;
while (fp)
{
n += fp & 1;
fp >>= 1;
}
return (n);
}
