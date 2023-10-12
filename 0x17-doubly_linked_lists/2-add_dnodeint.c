#include "lists.h"
/**
 * add_dnodeint  - add nodes at the biggening
 * @head: head pointer
 * @n: data
 * Return: adress to the new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *current = *head;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->n = n;
new_node->prev = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
current->prev = new_node;
new_node->next = current;
*head = new_node;
return (new_node);
}
