#include "holberton.h"
/**
 *_strcat -concatenates two strings.
 * @dest : is char type.
 * @src : is char type.
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
int i;           
int j;
j = 0;
for (i = 0 ; dest[i] != '\0' ; i++)
{}
while (src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
dest[i] = '\0';
return (dest);
}
