#include "lists.h"
/**
 * pop_listint  -function that deletes the head node of a linkedlist
 * @head:pointer to the head node
 *
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
listint_t *tempo = NULL;
int n = 0;
if (*head != NULL)
{
n = (*head)->n;
tempo = (*head)->next;
free(*head);
*head = tempo;
}
return (n);
}
