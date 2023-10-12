#include "lists.h"

/**
 * print_dlistint - print double linked list
 * @h : head pointed
 * Return: number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *current = h;
int count = 0;

while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
count++;
}
return (count);
}
