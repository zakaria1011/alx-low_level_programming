#include "hash_tables.h"
/**
 * hash_table_create - creat a hash table
 * @size: size of the tab
 * Return: return a pointer to the newest tab
*/
hash_table_t *hash_table_create(unsigned long int size)
{
int i;
hash_table_t *temp;
temp = malloc(sizeof(hash_table_t));
if (temp == NULL)
{
return (NULL);
free(NULL);
}
temp->size = size;
return (temp);
}
