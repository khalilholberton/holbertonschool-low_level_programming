#include "holberton.h"
/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 * @src : is char type.
 * @dest : is char type
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
int i, j;
for (i = 0; src[i] != '\0' ; i++)
{
}
for (j = 0 ; j <= i ; j++)
{
dest[j] = src[j];
}
return (dest);
}

