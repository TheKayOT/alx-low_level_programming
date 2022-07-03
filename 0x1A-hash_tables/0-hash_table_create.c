#include "hash_tables.h"
/**
 * hash_table_create - function that create a hash table
 * @size:size of the table
 *
 * Return:hash table or NULL if it fail
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t;
	hash_node_t **array;
	unsigned long int j;

	hash_t = malloc(sizeof(hash_table_t));
	if (hash_t == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		array[j] = NULL;

	hash_t->size = size;
	hash_t->array = array;

	return (hash_t);
}
