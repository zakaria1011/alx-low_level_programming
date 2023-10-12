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
unsigned int idx = 0;
if (head == NULL)
{
return (NULL);
}
while (idx < index || current->next == NULL)
{
current = current->next;
idx++;
}
return (current);
}
