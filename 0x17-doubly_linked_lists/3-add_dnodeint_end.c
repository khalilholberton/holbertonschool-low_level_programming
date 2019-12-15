#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node
 * at the end of a dlistint_t list.
 * @head: pointer
 * @n: is int type
 * return:address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *tmp;
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->next = NULL;
new->n = n;
if (*head == NULL)
{
new->prev = NULL;
*head = new;
return (new);
}
tmp = *head;
while (tmp->next != NULL)
tmp = tmp->next;
new->prev = tmp;
tmp->next = new;
return (new);
}
