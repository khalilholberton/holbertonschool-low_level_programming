#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
for (i = 0 ; i <= 9 ; i++)
{
putchar(i);
if (i != '9')
{
putchar(',');
putchar(' ');
}
}
return (0);
}
