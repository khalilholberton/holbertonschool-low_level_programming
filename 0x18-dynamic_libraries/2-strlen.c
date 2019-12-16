#include "holberton.h"

/**
 * _strlen - return length of a string.
 * @s : is char type
 * Return: length
 */

int _strlen(char *s)
{
int i = 0;
int a = 0;

while (s[i] != '\0')
{
a++;
i++;
}
return (a);
}
