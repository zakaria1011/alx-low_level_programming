#include "lists.h"
/**
 * insert_dnodeint_at_index - inset node at index
 * @h: head of the list
 * @idx: index
 * @n: data
 * Return: pointer to the new node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node = malloc(sizeof(dlistint_t));
dlistint_t *current = *h;
if (new_node == NULL)
return (NULL);
new_node->n = n;
if (idx == 0)
{
new_node->next = *h;
new_node->prev = NULL;
if (*h != NULL)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}
while (idx > 0)
{
if (current == NULL)
{
free(new_node);
return (NULL);
}
current = current->next;
idx--;
}
if (current == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = current;
new_node->prev = current->prev;
if (current->prev != NULL)
{
current->prev->next = new_node;
}
current->prev = new_node;
return (new_node);
}
