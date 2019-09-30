#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 * @a : is int type.
 * @b : is int type.
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
  int x = *a;
  *a = *b;
  *b = x;
}
