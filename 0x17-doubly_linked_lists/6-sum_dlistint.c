#include "lists.h"
/**
 * sum_dlistint - sum of data
 * @head: head of the list
 * Return: sum
*/
int sum_dlistint(dlistint_t *head)
{
dlistint_t *current = head;
int sum = 0;
while (current != NULL)
{
sum += current->n;
current = current->next;
}
return (sum);
}
