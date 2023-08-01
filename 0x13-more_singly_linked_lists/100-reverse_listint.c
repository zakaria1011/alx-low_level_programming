#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: pointer to head of the list
 * Return: pointer to the head of the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *current, *step_back = NULL, *step_ahead = NULL;
current = *head;

while (current != NULL)
{
step_ahead = current->next;
current->next = step_back;
step_back = current;
current = step_ahead;
}
*head = step_back;
return (*head);
}
