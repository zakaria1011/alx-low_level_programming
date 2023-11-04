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
hash_table_t *temp;
unsigned long int i;
unsigned long int index;
hash_node_t *new_node;
if (!ht || !key || *key == '\0')
return (0);
index = key_index(key, ht -> size);
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);
new_node -> value = value;
new_node -> next = ht -> array[index];
ht -> array[index] = new_node;
return (1);
}
