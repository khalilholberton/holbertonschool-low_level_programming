#include "lists.h"
/**
 * free_listint2  - function that frees a linkedlist
 *@head:pointer to the head
 *
 */
void free_listint2(listint_t **head)
{
listint_t *tempo;
listint_t *tempo1;
if (head == NULL)
return;
tempo1 = *head;
while (tempo1 != NULL && head != NULL)
{
tempo = tempo1;
tempo1 = tempo1->next;
free(tempo);
}
*head = NULL;
}
