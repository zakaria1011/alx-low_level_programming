#include "lists.h"
/**
 * get_nodeint_at_index - get node at index
 * @head: head of the list
 * @index: index
 * Return: pointer to the index
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;
listint_t *current;
if (head == NULL)
return (NULL);
current = head;
for (i = 0 ; i < index ; i++)
{
current = current->next;
if (current == NULL)
return (NULL);
}
return (current);
}
