#include "lists.h"
/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @head: node head
 * @str:  string
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
unsigned int i;
list_t *c;

c = malloc(sizeof(list_t));
if (c == '\0')
return (NULL);
for (i = 0; str[i] != '\0'; i++)
;
c->len = i;
c->str = strdup(str);
c->next = *head;
*head = c;
return (*head);
}
