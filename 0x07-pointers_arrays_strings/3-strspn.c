#include "holberton.h"
/**
 *  _strspn - gets the length of a prefix substring.
 * @s : is char type
 * @accept : is char type
 * Return: number of bytes in the initial segment
 *  of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
int i, j;
i = 0;
while (s[i])
{
j = 0;
while (accept[j])
{
if (s[i] == accept[j])
break;
j++;
}
if (!accept[j])
break;
i++;
}
return(i);

}
