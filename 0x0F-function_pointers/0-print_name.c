#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name -  print name
 * @name: name to print
 * @f: pointer to function (function to call to print a name)
 */

void print_name(char *name, void (*f)(char *))
{
if (f == NULL)
return;
f(name);
}
