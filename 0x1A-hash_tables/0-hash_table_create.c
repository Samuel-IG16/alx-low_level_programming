#include "hash_tables.h"
/**
  * hash_table_create - creates a hash table
  * @size: size of the array of the hash table
  *
  * Return: Pointer to the newly created hash table or Null if something goes wrong
  */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *ht;

	if (size == 0)
		return (NULL);

	ht = malloc(sizeof(hash_table_t));
	if (!ht)
		return (NULL);

	ht->size = size;
	ht->array = calloc((size_t)ht->size, sizeof(hash_node_t *));
	if (ht->array == NULL)
		return (NULL);

	return (ht);
}