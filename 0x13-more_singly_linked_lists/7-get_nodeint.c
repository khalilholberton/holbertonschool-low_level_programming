#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linkedlist
 * @head: pointer to head node
 * @index : index of the node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

listint_t *tempo = head;
unsigned int i = 0;

while (tempo)
{
if (i == index)
return (tempo);
i++;
tempo = tempo->next;
}
return (NULL);
}
