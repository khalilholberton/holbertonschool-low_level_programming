#include "holberton.h"
#include <stdio.h>
/**
 * *_strstr - check the code for Holberton School students.
 * @haystack : is char type
 * @needle : is char type
 * Return: pointer to the beginning of the located substring
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
{
char *i = needle;
char *j = haystack;
while (*i == *haystack && *i != '\0'
&& *haystack != '\0')
{
haystack++;
i++;
}
if (*i == '\0')
return (j);
haystack = j + 1;
}
return (NULL);
}
