#include "hash_tables.h"
/**
 * hash_table_print - print a hash tab
 * @ht: the hash tab
*/
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *current;
unsigned long int index;
int more_nodes = 1;
if (ht == NULL)
return;
printf("{");
for (index = 0 ; index < ht->size ; index++)
{
current  = ht->array[index];
while (current != NULL)
{
if (more_nodes == 0)
printf(", ");
printf("'%s':'%s'", current->key, current->value);
more_nodes = 0;
current = current->next;
}
}
printf("}\n");
}
