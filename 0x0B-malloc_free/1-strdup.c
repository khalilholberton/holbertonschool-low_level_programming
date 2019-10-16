#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: is char type
 * Return: pointer
 */

char *_strdup(char *str)
{
char *strcopy;
unsigned int i, j;

if (str == NULL)
return (NULL);
for (i = 0; str[i] != '\0'; i++)
{}
i++;
strcopy = malloc(i *sizeof(char));
if (strcopy == NULL)
return (NULL);
for (j = 0; j < i; j++)
{
strcopy[j] = str[j];
}
return (strcopy);
}
