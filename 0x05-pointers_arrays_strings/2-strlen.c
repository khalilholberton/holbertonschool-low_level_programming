#include "holberton.h"

/**
 *  _strlen -returns the length of a string.
 * @s : is char type.
 * Return: Always 0.
 */
int _strlen(char *s)
{
int i;
for (i = 0 ; s[i] != 0 ; i++)
{}
return (i);
}
