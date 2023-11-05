#include "hash_tables.h"
/**
 * hash_table_delete - delet a hash table
 * @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
unsigned long int index;
hash_node_t *current;
for (index = 0 ; index < ht->size ; index++)
{
current = ht->array[index];
while (current != NULL)
{
free(current);
current = current->next;
}
}
}
