#include "holberton.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a : is int type.
 * @n : is int type.
 * Return: Always 0.
 */
void reverse_array(int *a, int n)
{
int i;
int c;
n = n - 1;
for (i = 0; i <= n ; i++)
{
c = a[i];
a[i] = a[n];
a[n] = c;
n--;
}
}
