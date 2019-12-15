#include "lists.h"


/**
 * sum_dlistint - function that returns the sum of all
 * the data (n) of a dlistint_t linked list.
 * @head: pointer to the head.
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
int res;

res = 0;
if (head == NULL)
{
return (res);
}
while (head != NULL)
{
res += head->n;
head = head->next;
}
return (res);
}
