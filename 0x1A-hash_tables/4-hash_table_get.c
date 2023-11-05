#include "hash_tables.h"
/**
 * hash_table_get - get a value from hash tab
 * @ht: tab
 * @key: the key
 * Return: the value or null
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index;
hash_node_t *current;
if (key == NULL)
return (NULL);
index = key_index((const unsigned char *)key, ht->size);
current = ht->array[index];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
return (current->value);
}
current = current->next;
}
return (NULL);
}
