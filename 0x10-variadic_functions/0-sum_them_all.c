#include <stdarg.h>
/**
 *sum_them_all - sum all arguments
 *@n: integer
 *@...: ellipsis
 *Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;

va_list list;

va_start(list, n);
if (n == 0)
return (0);
for (i = 0; i < n; i++)
{
sum += va_arg(list, int);
}
va_end(list);
return (sum);
}
