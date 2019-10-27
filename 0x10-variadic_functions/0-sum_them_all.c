#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters.
 * @n: number of arguements
 * Return: 0 is n is 0 or return sum
 */

int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list givennumbers;

if (n == 0)
return (0);
va_start(givennumbers, n);
for (i = 0; i < n; i++)
{
sum += va_arg(givennumbers, int);
}
va_end(givennumbers);
return (sum);
}
