#include "holberton.h"
/**
 * _isupper- check for uppercase character.
 * @c :is char type.
 * Return: 1 if c uppercase
 * and 0 if otherwise.
 */
int _isupper(int c)
{
if (c >= 65 && c <= 90)
return (1);
else
return (0);
}
