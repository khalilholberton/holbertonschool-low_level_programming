#include "lists.h"
#include <stdio.h>
/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: header of the list
 * Return: the number of elements in a list
 */

size_t list_len(const list_t *h)
{

unsigned int i = 0;
const list_t *c = h;

while (c != NULL)
{
c = c->next;
i++;
}
return (i);
}
