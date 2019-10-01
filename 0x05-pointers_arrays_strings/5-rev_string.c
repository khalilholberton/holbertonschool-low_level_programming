#include "holberton.h"
/**
 * rev_string - reverses a string.
 * @s : is char type.
 */
void rev_string(char *s)
{
int i;
int j;
j = 0;
char swapcontainer;
for (i = 0 ; s[i] != '\0'; i++)
{}
for (j = 0 ; j <= (i / 2); j++)
{
swapcontainer = s[i - 1 - j];
s[i - 1 - j] = s[j];
s[j] = swapcontainer;
}
}
