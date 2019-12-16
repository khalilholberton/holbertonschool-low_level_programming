#include "holberton.h"
/**
 * *_memcpy - copies memory area
 * @dest: is char type
 * @src: is char type
 * @n : is int type
 * Return: adress of dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0;
while (i < n)
{
dest[i] = src[i];
i++;
}
return (dest);
}
