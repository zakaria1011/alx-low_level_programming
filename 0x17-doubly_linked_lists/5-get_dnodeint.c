#include "lists.h"
/**
 * get_dnodeint_at_index - get node at given index
 * @head: head of the list
 * @index: index
 * Return: pointer to the index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
dlistint_t *current = head;
if (head == NULL)
{
return (NULL);
}
while (index > 0 && current != NULL)
{
current = current->next;
index--;
}
if (index > 0)
{
return (NULL);
}
return (current);
}
