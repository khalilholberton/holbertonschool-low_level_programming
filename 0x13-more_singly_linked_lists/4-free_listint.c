#include "lists.h"
/**
 * free_listint  - function that frees a linkedlist
 * @head : pointer to head
 *
 */
void free_listint(listint_t *head)
{
listint_t *tempo = NULL;
while (head != NULL)
{
tempo = head;
head = head->next;
free(tempo);
}
}
