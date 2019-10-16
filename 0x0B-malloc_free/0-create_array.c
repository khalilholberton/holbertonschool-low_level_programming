#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @size: is int type
 * @c: is char type
 * Return: pointer
 */

char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
if (size != 0)
p = malloc(size * sizeof(c));
else
return (NULL);
if (p == NULL)
return (NULL);
i = 0;
while (i < size)
{
p[i] = c;
i++;
}
return (p);
}
