#include "lists.h"


/**
 * delete_dnodeint_at_index - function that deletes the
 * node at index index of a dlistint_t linked list.
 * @head: pointer to the head
 * @index: int type
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *tmp = *head;
unsigned int counter = 0;
if (head == NULL || *head == NULL)
return (-1);
for (counter = 0; tmp != NULL; counter++)
{
if (index == 0)
*head = tmp->next;
if (counter == index)
{
if (tmp->next != NULL)
tmp->next->prev = tmp->prev;
if (counter != 0)
tmp->prev->next = tmp->next;
free(tmp);
return (1);
}
tmp = tmp->next;
}
return (-1);
}
