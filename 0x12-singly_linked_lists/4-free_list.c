#include "lists.h"
/**
 * free_list - free list of node
 * @head: head node
*/
void free_list(list_t *head)
{
list_t *curr_node, *next_node;
curr_node = head;
while (curr_node != NULL)
{
next_node = curr_node->next;
free(curr_node->str);
free(curr_node);
curr_node = next_node;
}
}
