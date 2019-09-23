#include "holberton.h"
/**
*main - main block
*Description : print a-z lowercase
*Return :0
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
