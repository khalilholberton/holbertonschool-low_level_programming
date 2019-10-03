#include "holberton.h"
/**
 * *cap_string - capitalizes all words of a string.
 * @c : is char type.
 * Return: Always 0.
 */

char *cap_string(char *c)
{
int x = 0;
for (x = 0; c[x] != 0; x++)
{
if (x == 0)
{
if (c[x] >= 'a' && c[x] <= 'z')
{
c[x] = c[x] - 32;
}
}
if  (c[x] == '}' || c[x] == ',' || c[x] == '\n'
|| c[x] == '.' || c[x] == '\t' || c[x] == ';'
|| c[x] == '"' || c[x] == '{' || c[x] == '!'
|| c[x] == '(' || c[x] == ')' || c[x] == '?'
|| c[x] == ' ')
{
if (c[x + 1] >= 'a' && c[x + 1] <= 'z')
{
c[x + 1] = c[x + 1] - 32;
}
}
}
return (c);
}
