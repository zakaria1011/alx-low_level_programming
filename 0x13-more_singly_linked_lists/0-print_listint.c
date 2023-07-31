#include "lists.h"
/**
 * print_listint - print data of nods
 * @h: pointer to list head
*/
size_t print_listint(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
