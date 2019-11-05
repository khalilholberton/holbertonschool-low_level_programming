#include "lists.h"
/**
 * sum_listint  - function that returns the sum of all the data (n)
 * of a linkedlist
 * @head:pointer to head node
 *
 * Return: sum of n
 */
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *tempo = head;
if (head == NULL)
return (0);

while (tempo)
{
sum +=  tempo->n;
tempo = tempo->next;
}
return (sum);
}
