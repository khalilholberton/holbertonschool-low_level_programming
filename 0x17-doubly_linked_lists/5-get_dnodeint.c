#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth
 * node of a dlistint_t linked list.
 * @head: pointer to the head.
 * @index:index of the node
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int counter;
counter = 0;
while (head != NULL && counter <= index)
{
if (counter == index)
return (head);
head = head->next;
counter++;
}
return (NULL);
}
