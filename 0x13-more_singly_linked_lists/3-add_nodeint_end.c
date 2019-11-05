#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end of a linkedlist
 * @head : pointer to head node
 * @n: data of the struct with integer type
 *
 * Return: adress of the new element (last node of the list)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *newlastnode = malloc(sizeof(listint_t));
listint_t *currentlastnode = *head;
if (newlastnode == NULL)
{
return (NULL);
}
newlastnode->n = n;
newlastnode->next = NULL;
if (*head == NULL)
{
*head = newlastnode;
return (newlastnode);
}
while (currentlastnode->next != NULL)

currentlastnode = currentlastnode->next;
currentlastnode->next = newlastnode;
return (newlastnode);
}
