#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a new node
 * at a given position
 * @head: pointer to head node
 * @idx : given position to add node
 * @n:data of the struct
 * Return: adress of the new node
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *tempo;
listint_t *newnode;
unsigned int i = 0;

if (head == NULL)
return (NULL);

newnode = malloc(sizeof(listint_t));

if (newnode == NULL)
return (NULL);

newnode->n = n;
newnode->next = NULL;
tempo = *head;

if (idx > 0 && (*head) == NULL)
{
free(newnode);
return (NULL);
}
if (idx == 0)
{
newnode->next = *head;
*head = newnode;
return (newnode);
}
while (i < idx - 1)
{
tempo = tempo->next;
if (idx - i > 0 && tempo == NULL)
{
free(newnode);
return (NULL);
}
i++;
}
newnode->next = tempo->next;
tempo->next = newnode;
return (newnode);
}
