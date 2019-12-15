#include "lists.h"

/**
 * print_dlistint - function that prints all
 * the elements of a dlistint_t list.
 * @h: pointer
 * eturn: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
int counter;

if (h == NULL)
return (0);
for (counter = 0; h != NULL; counter++)
{
printf("%d\n", h->n);
h = h->next;

}
return (counter);
}
