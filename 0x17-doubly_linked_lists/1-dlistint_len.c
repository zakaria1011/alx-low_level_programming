#include "lists.h"

/**
 * dlistint_len - count number of elements
 * @h: head pointer
 * Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t *current = h;
int count = 0;
while (current != NULL)
{
current = current->next;
count++;
}
return (count);
}
