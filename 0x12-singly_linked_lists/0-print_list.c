#include "lists.h"
#include <stdio.h>
/**
 * print_list - function that prints all the elements of a list_t list
 * @h: pointer to head  node struct
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
unsigned int i;
const list_t *c;

i = 0;
c = h;
while (c != NULL)
{
if (c->str ==  NULL)
{
printf("[0] (nil)\n");
}
else
printf("[%d] %s\n", c->len, c->str);
c = c->next;
i++;
}
return (i);
}
