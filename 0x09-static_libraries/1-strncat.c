#include "holberton.h"
/**
 * *_strncat -concatenates two strings.
 * @dest : is char type.
 * @src : is char type.
 * @n : is int type.
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
int i;
int j;
j = 0;
for (i = 0; dest[i] != '\0' ; i++)
{}
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
