#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: is int type
 * @max: is int type
 * Return: pointer
 */
int *array_range(int min, int max)
{
int *p;
int i;

if (min > max)
return (NULL);
p = malloc(sizeof(int) * ((max - min) + 1));
if (p == NULL)
return (NULL);
i = 0;
while (min <= max)
p[i++] = min++;
return (p);
}
