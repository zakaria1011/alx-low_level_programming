#include "lists.h"
/**
 * print_listint_safe - printf data
 * @head: pointer to head
 * Return: numebr of element
*/
size_t print_listint_safe(const listint_t *head)
{
const listint_t *current  = head;
size_t count = 0;

if (head == NULL)
{
exit(98);
return (0);
}
while (current != NULL)
{
printf("[%p] %d\n", (void *)current, current->n);
count++;
if (current <= current->next)
{
printf("-> [%p] %d\n", (void *)current->next, current->next->n);
exit(98);
}
current = current->next;
}
return (count + 1);
}

