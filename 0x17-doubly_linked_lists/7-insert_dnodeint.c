#include "lists.h"
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    dlistint_t *current = *h;
    dlistint_t *prev;
    dlistint_t *new_node;
    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL)
    {
        return (NULL);
    }
    new_node->n = n;
    while (current != NULL && idx > 0)
    {
        prev = current;
        current = current->next;
    }
    if (idx > 0)
    {
        return (NULL);
    }
    new_node->next = current;
    new_node->prev = prev;
    return (new_node);
}
