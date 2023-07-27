#include "lists.h"
/**
 * add_node_end - add node at the end of a list
 * @head: head of the list
 * @str: string input
 * Return: adress to the last node
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *p_mov;
if (str == NULL)
return (NULL);
new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = NULL;
if (*head == NULL)
*head = new_node;
else
{
p_mov = *head;
while (p_mov->next != NULL)
{
p_mov = p_mov->next;
}
p_mov->next = new_node;
}
return (new_node);
}
