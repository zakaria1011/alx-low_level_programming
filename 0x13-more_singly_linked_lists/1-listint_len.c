#include "lists.h"
/**
 * listint_len - count num of element in list
 * @h: argument
 * Return: num of elements
*/
size_t listint_len(const listint_t *h)
{
size_t i = 0;
while (h != NULL)
{
h = h->next;
i++;
}
return (i);
}
