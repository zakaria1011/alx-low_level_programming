#include "lists.h"
/**
 * free_listint2 - free list
 * @head: pointer to head list
*/
void free_listint2(listint_t **head)
{
listint_t *current, *next_node;
if (*head == NULL)
return;
current = *head;
while (current != NULL)
{
next_node = current->next;
free(current);
current = next_node;
}
*head = NULL;
}
