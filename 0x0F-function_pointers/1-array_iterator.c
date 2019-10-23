#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - iterate through array and
 * print it using other function(callback)
 * @array: pointer to array of int type
 * @size: size of array
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i = 0;
if (array && size && action)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
