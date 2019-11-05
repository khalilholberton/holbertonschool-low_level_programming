#include "lists.h"
/**
 * listint_len - function that returns the number of elements in a linkedlist
 * @h: pointer to the head
 *
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
size_t i;
i = 0;
while (h != '\0')
{
h = h->next;
i++;
}
return (i);
}
