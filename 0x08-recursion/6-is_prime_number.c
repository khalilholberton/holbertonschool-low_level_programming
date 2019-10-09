#include "holberton.h"
/**
 * is_prime - check the code for Holberton School students.
 * @a : is int type
 * @n : is int type
 * Return: int .
 */
int is_prime(int n, int a)
{
if (a % n == 0)
return (0);
else if (n + 1 == a && a % n != 0)
return (1);
return (is_prime(n + 1, a));
}
/**
 * is_prime_number - return 1  prime number
 * @n : is int type
 * Return: int
 */
int is_prime_number(int n)
{
if (n == 2)
return (1);
else if (n <= 1)
return (0);
return (is_prime(2, n));
}
