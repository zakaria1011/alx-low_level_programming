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
char *new_value;

if (!ht || !key || *key == '\0')
return (0);
index = key_index((const unsigned char *)key, ht -> size);
current = ht -> array[index];
if (strcmp(current -> key, key) == 0)
{
    new_value = strdup(value);
    current -> value = new_value;
    return (1);
}
new_node = malloc(sizeof(hash_node_t));
new_node -> value = strdup(value);
new_node -> key = strdup(key);
return (1);
}
