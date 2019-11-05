#include "lists.h"

/**
 * print_listint - prints all the elements of a linkedlist
 *@h: pointer to the head
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
unsigned int i;
i = 0;
while (h != '\0')
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
