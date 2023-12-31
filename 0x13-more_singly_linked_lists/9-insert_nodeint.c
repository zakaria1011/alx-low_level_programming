#include "lists.h"
/**
 * insert_nodeint_at_index - insert node
 * @head: head of list
 * @idx: position
 * @n: data
 * Return: pointer to the node inserted
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *current, *new_node, *step_less;
unsigned int i;

new_node = (listint_t *)malloc(sizeof(listint_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->n = n;
current = *head;
if (idx == 0 || *head == NULL)
{
new_node->next = current;
*head = new_node;
return (new_node);
}
for (i = 0 ; i < idx ; i++)
{
if (current == NULL && i != (idx - 1))
{
return (NULL);
}
step_less = current;
current = current->next;
}
new_node->next = current;
step_less->next = new_node;
return (new_node);
}
