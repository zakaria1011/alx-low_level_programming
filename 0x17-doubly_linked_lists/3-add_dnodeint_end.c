#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: head of the list
 * @n: data
 * Return: adress to the new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *current = *head;
dlistint_t *new_node;

new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
new_node->prev = current;
return (new_node);
}
