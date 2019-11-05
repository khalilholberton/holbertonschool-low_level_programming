#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linkedlist
 * @head: pointer to head node
 * @index : index of the node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

unsigned int i = 0;
listint_t *tempo;

if (head == NULL)
return (NULL);
while (head != NULL && i < index)
{
tempo = head;
tempo = tempo->next;
i++;
}
return (tempo);
}
