#include "lists.h"

/**
 * add_dnodeint - function that adds a new node at
 * the beginning of a dlistint_t list.
 * @head: double pointer
 * @n: is int type
 * return: adress of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

dlistint_t *new;
if (head == NULL)
{
return (NULL);
}
new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
return (NULL);
}
new->next = *head;
new->prev = NULL;
new->n = n;
if (*head != NULL)
(*head)->prev = new;
*head = new;
return (new);
}
