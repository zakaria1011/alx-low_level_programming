#include "hash_tables.h"
/**
 * hash_table_create - creat a hash table
 * @size: size of the tab
 * Return: return a pointer to the newest tab
*/
hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *new_tab;
if (size == 0)
{
return (NULL);
}
new_tab = malloc(sizeof(hash_table_t));
if (new_tab == NULL)
{
return (NULL);
}
new_tab->array = malloc(sizeof(hash_node_t) * size);
if (new_tab->array == NULL)
{
return (NULL);
}
new_tab->size = size;
for (i = 0; i < size; i++)
new_tab->array[i] = NULL;
return (new_tab);
}
