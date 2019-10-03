#include "holberton.h"
/**
 * *leet - check the code for Holberton School students.
 * @s : is xhar type.
 * Return: Always 0.
 */
char *leet(char *s)
{
int i;
int j;
char x[] = "aAeEoOtTlL";
char y[] = "4433007711";
for (i = 0 ; s[i] != '\0' ; i++)
{
for (j = 0 ; x[j] != '\0'; j++)
{
if (s[i] == x[j])
{
s[i] = y[j];
}
}
}
return (s);
}
