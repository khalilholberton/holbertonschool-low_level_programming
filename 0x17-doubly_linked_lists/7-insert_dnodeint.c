#include "lists.h"

/**
 * insert_dnodeint_at_index - unction that inserts a new node
 * at a given position.
 * @h: double pointer
 * @n: is int type
 * @idx:index of the list to insert the node
 * return:the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *tmp;
dlistint_t *new;
unsigned int i;
if (h == NULL)
{
return (NULL);
}
if (idx == 0)
{
return (add_dnodeint(h, n));
}
tmp = *h;
i = 0;
while (tmp != NULL && i < idx)
{
tmp = tmp->next;
i++;
}
if (tmp == NULL && i == idx)
{
return (add_dnodeint_end(h, n));
}
if (tmp != NULL)
{
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
tmp->prev->next = new;
new->prev = tmp->prev;
new->n = n;
tmp->prev = new;
new->next = tmp;

return (new);
}
return (NULL);
}
