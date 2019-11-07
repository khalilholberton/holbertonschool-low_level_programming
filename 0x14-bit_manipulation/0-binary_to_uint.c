#include "holberton.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: ic char type
 * Return: onverted number
 */
unsigned int binary_to_uint(const char *b)
{
int idx;
unsigned int cal = 0;
unsigned int elm = 1;

if (b == '\0')
return (0);
idx = 0;
while (b[idx] != '\0')
{
if (b[idx] != '1' && b[idx] != '0')
return (0);
cal <<= 1;
if (b[idx] == '1')
cal ^= elm;
idx++;
}
return (cal);
}
