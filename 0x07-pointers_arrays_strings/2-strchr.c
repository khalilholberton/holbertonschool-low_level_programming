#include "holberton.h"
/**
 * *_strchr - check the code for Holberton School students.
 * @s : is char type
 * @c : is char type
 * Return: null if caracter not found.
 */
char *_strchr(char *s, char c)
{
int i;
i = 0;
while (s[i] != '\0')
{
if  (s[i] == c)

return (&(s[i]));

i++;
}
return (0);
}
