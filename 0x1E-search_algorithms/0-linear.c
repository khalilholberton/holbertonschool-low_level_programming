#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: array
 * @size: array size
 * @value: int type
 * Return: -1 if not found else return the first index
 */
int linear_search(int *array, size_t size, int value)
{
	size_t c;

	if (array == NULL)
		return (-1);

	for (c = 0; c < size; c++)
	{
		printf("Value checked array[%lu] = [%d]\n", c, array[c]);
		if (array[c] == value)
			return (c);
	}
	return (-1);
}
