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
i = i - 1;
 for(j = 0 ; j < i/2; j++)
{
swapcontainer = s[i];
s[i] = s[j];
s[j] = swapcontainer;
}
}
