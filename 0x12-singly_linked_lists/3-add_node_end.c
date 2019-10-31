#include "lists.h"
#include <stdlib.h>
/**
 * *add_node_end - adds a new node at the end of a list_t list.
 * @head: node head.
 * @str: string.
 * Return: address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
unsigned int i;
list_t *c;
list_t *newnd;

newnd = malloc(sizeof(list_t));

if (newnd ==  '\0')
return (NULL);


for  (i = 0; str[i] != '\0'; i++)
;

newnd->str  = strdup(str);
newnd->len  = i;

if (*head == NULL)
{
*head = newnd;
newnd->next = NULL;
return (*head);
}
c = *head;
while (c->next)
{
c = c->next;
}
c->next = newnd;
newnd->next = NULL;
return (*head);
}
