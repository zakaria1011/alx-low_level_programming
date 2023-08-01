#include "lists.h"
/**
 * delete_nodeint_at_index - delet a node index
 * @head: pointer to the head
 * @index: index
 * Return: 1 or -1
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *current, *step_less, *step_ahead;
unsigned int i = 0;

if (head == NULL || *head == NULL)
return (-1);
current = *head;
if (index == 0)
{
*head = current->next;
free(current);
return (1);
}
while (i < index)
{
if (current == NULL)
return (-1);
step_less = current;
current = current->next;
step_ahead = current->next;
i++;
}
step_less->next = step_ahead;
free(current);
return (1);
}
