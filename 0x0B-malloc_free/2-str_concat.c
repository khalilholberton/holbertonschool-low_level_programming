#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat -  concatenates two strings.
 * @s1: is char type
 * @s2: is char type
 * Return: pointer to the concatenated string
 */

char *str_concat(char *s1, char *s2)
{

int i;
int cap1 = 0;
int cap2 = 0;
char *phr;
if (s1 != NULL)
{
while (s1[cap1] != '\0')
cap1++;
}
if (s2 != NULL)
{
while (s2[cap2] != '\0')
cap2++;
}
phr = malloc((cap1 + cap2 + 1) * sizeof(*phr));
if (phr == NULL)
return (NULL);
for (i = 0; i < cap1; i++)
phr[i] = s1[i];
for (i = 0; i < cap2; i++)
{
phr[i + cap1] = s2[i];
}
phr[cap1 + cap2] = '\0';
return (phr);
}
