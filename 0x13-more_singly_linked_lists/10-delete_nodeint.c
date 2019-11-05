#include "lists.h"
/**
 * delete_nodeint_at_index - function that deletes the node at index
 * @c: pointer to head node
 * @index : given position to delete node
 * Return: integer
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

listint_t *delenode;
listint_t *tempo;
unsigned int i;
i = 0;
tempo = *head;
if (*head == NULL)
return (-1);

if (index == 0)
{
*head = tempo->next;
free(tempo);
return (1);
}
while (i != (index - 1))
{
tempo = tempo->next;
if (tempo == NULL)
return (-1);

i++;
}
delenode = tempo->next;
tempo->next = delenode->next;
free(delenode);
return (1);
}

