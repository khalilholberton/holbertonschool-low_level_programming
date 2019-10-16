#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: is int type
 * @av: is int type
 * Return: pointer
 */
char *argstostr(int ac, char **av)
{
char *str;
int i;
int j;
int z = 0;
if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
z++;
}
str = malloc(sizeof(char) * z + 1 + ac);
z = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
str[z] = av[i][j];
z++;
}
str[z] = '\n';
z++;
}
return (str);
}
