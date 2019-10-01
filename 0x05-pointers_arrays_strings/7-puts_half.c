#include "holberton.h"
/**
 * puts_half - prints half of a string, followed by a new line..
 * @str : is char type.
 */
void puts_half(char *str)
{
int i;
int length;
int n;
 for (length = 0 ; str[length] != '\0'; length++)
{
}
n = (length - 1) / 2;
if (n / 2 == 0)
{
n = (length - 1) / 2;
for (i = n + 1 ; i <= length - 1; i++)
{
_putchar (str[i]);
}
}
else
for (i = n + 1 ; i <= length - 1 ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
