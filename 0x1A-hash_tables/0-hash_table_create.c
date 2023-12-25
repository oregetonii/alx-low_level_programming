#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - Creates a hash table
 * @size: the size of the hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *head;

	head = malloc(sizeof(hash_node_t) * size);
	if (head == NULL)
		return (NULL);
	else
		return (head);
}
