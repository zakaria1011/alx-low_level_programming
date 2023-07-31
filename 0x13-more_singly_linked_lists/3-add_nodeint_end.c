#include "lists.h"
/**
 * add_nodeint_end - add node in the end
 * @head: pointer to the head
 * @n: element
 * Return: adr to the end of the list
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node, *current;

new_node = (listint_t *)malloc(sizeof(listint_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->n = n;
if (*head == NULL)
{
*head = new_node;
}
else
{
current = *head;
while (current->next != NULL)
{
current = current->next;
}
current->next = new_node;
}
return (new_node);
}
