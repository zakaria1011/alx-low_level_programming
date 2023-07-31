#include "lists.h"
/**
 * add_nodeint - add node to head list
 * @head: pointer to head
 * @n: element of node
 * Return: adress to head
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
new_node = (listint_t *) malloc(sizeof(listint_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->n = n;
new_node->next = *head;
*head = new_node;
return (new_node);
}
