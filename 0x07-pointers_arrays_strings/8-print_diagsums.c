#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - check the code for Holberton School students.
 * @a : is int type
 * @size : is int type
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
int i = 0, sum1 = 0, sum2 = 0;
for (i = 0; i < size; i++)
{
sum1 += a[i * size + i];
sum2 += a[(i * size) + (size - 1 - i)];
}
printf("%d, %d\n", sum1, sum2);
}
