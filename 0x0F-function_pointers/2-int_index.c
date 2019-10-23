#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - search for an integer inside array
 * @array: pointer to an array (array to search)
 * @size: size of the array
 * @cmp:  function of comparison
 * Return: Index of the element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (cmp == NULL || array == NULL)
return (-1);
if (size <= 0)
return (-1);
for (i = 0; i < size; i++)
{
if (cmp(array[i]))
return (i);
}
return (-1);
}
