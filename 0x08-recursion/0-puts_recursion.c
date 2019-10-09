#include "holberton.h"
/**
 * _puts_recursion - check the code for Holberton School students.
 * @s : is char type
 * Return: none.
 */
void _puts_recursion(char *s)
{
int i = 0;
if (s[i] == '\0')
{
_putchar ('\n');
return;
}
_putchar (s[i]);
s++;
_puts_recursion(s);
}
