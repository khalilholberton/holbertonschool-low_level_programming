#include "holberton.h"
/**
*print_alphabet - Print the alphabet in lowercase.
*Return :0.
*/
void print_alphabet(void)
{
char x = 'a';
while (x <= 'z')
{
_putchar(x);
x++;
}
_putchar('\n');
}
