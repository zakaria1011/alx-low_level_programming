#include "lists.h"
/**
 * add_node - function that add node in the head of a list
 * @head: head
 * @str: input char
 * Return: NULL or adress of head pointer
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

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
new_node->next = *head;
*head = new_node;
return (new_node);
}
