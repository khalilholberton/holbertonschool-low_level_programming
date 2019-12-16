#include "holberton.h"

/**
 * _atoi - convert a string to an integer.
 * @s: is char type
 * Return:  converted string.
 */

int _atoi(char *s)
{
  int i = 0, len = 0, res = 0, sign = 1, tot = 0;

  while (s[len] != '\0')
    {
      len++;
    }
while (i < len && tot == 0)
{
if (s[i] == '-')
sign *= -1;
if (s[i] >= '0' && s[i] <= '9')
{
res = res * 10 + sign * (s[i] - 48);
if (s[i + 1] >= '0' && s[i + 1] <= '9')
tot = 0;
else
tot = 1;
}
i++;
}
return (res);
}
