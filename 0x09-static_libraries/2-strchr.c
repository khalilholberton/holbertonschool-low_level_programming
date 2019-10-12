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

for  (i = 0; *(s + i) != '\0'; i++)
{
if  (*(s + i) == c)

return (s + i);

}
if (*(s + i) == c)
return (s + i);
return (0);
}
