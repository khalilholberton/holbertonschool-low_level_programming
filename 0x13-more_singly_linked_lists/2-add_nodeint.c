#include "lists.h"
/**
 * add_nodeint - function that adds a new node at the beginning of a linkedlist
 * @head:pointer to head node
 * @n:data of the struct with integer type
 *
 * Return:adress of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newhead = malloc(sizeof(listint_t));
if (newhead != NULL)
{
newhead->n = n;
newhead->next = *head;
*head = newhead;
}
return (newhead);

}

