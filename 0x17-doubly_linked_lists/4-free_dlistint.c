#include "lists.h"
/**
 * free_dlistint - free nodes
 * @head: head of the node
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *current, *prev;
current = head;
prev = current;
if (head != NULL)
{
while (current->next != NULL)
{
current = current->next;
free(prev);
prev = current;
}
free(current);
}
}
