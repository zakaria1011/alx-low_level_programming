#include "hash_tables.h"
/**
 * hash_table_delete - delet a hash table
 * @ht: hash table
*/
void hash_table_delete(hash_table_t *ht)
{
hash_table_t *head;
unsigned long int index;
hash_node_t *current, *temp;
head = ht;
if (ht == NULL)
return;
for (index = 0 ; index < ht->size ; index++)
{
current = ht->array[index];
while (current != NULL)
{
temp = current->next;
free(current->key);
free(current->value);
free(current);
current = temp;
}
free(head->array);
free(head);
}
}
