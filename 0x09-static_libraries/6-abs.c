#include "holberton.h"
/**
 * _abs - compute the absolute value of an integer.
 *
 * @x: int type.
 *
 * Return: return absolute value of integer.
 */
int _abs(int x)
{
if (x < 0)
return (x * -1);
else
return (x);
}
