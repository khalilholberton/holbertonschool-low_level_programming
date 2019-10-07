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
char *a = haystack;
while (*haystack != 0)
{
a = haystack;
while (*haystack == *needle && *haystack && *needle)
{
haystack++;
needle++;
}
if (*needle == 0)
return (a);
haystack++;
}
return (0);
}
