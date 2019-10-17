#include <stdlib.h>
#include <stdio.h>
/**
 * *string_nconcat - concatenates two strings.
 * @s1: is char type
 * @s2: is char type
 * @n: is int type
 * Return: pointer.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *str;
unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

if (s1 != NULL)
{
while (s1[len1] != '\0')
len1++;
}
if (s2 != NULL)
{
while (s2[len2] != '\0')
len2++;
}
if (n >= len2)
n = len2;
str = malloc(sizeof(char) * (len1 + n + 1));
if (str == 0)
return (NULL);
while (i < len1)
{
str[i] = s1[i];
i++;
}
while (i < len1 + n)
{
str[i] = s2[j];
i++;
j++;
}
str[i] = '\0';
return (str);
}
