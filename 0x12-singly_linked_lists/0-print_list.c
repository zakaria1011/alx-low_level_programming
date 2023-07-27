#include "lists.h"
/**
 * print_list - p
 * @h: list_t struct
 * Return: lenght of teh string
*/
size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *p = h;
while (p != NULL)
{
count++;
if (p->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("%s\n", p->str);
}
p = p->next;
}
return (count);
}
