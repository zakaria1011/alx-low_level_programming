#include "hash_tables.h"
/**
 * hash_table_set - add element
 * @ht: hash table
 * @key: the key
 * @value: value to update
 * Return: 0 if failed 1 in succed
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *current;

if (!ht || !key || *key == '\0')
return (0);
index = key_index((const unsigned char *)key, ht->size);
current = ht->array[index];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
free(current->value);
current->value = strdup(value);
if (current->value == NULL)
return (0);
return (1);
}
current = current->next;
}
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);
new_node->key = strdup(key);
new_node->value = strdup(value);
new_node->next = NULL;
ht->array[index] = new_node;
return (1);
}
