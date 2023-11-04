#include "hash_tables.h"
/**
 * key_index - found a key index
 * @key: key
 * @size: size of the hash
 * Return: index
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_value;
hash_value = hash_djb2(key);
return (hash_value % size);
}
