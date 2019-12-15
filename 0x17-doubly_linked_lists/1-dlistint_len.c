#include "lists.h"

/**
 * dlistint_len - function that returns the
 * number of elements in a linked dlistint_t list
 * @h: pointer to the head
 * Return: number of data
 */
size_t dlistint_len(const dlistint_t *h)
{
int counter;
counter = 0;
while (h != NULL)
{
h = h->next;
}
return (counter);
}
