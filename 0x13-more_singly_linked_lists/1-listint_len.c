#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list
 * @h: list
 * Return: number of node
 */

size_t listint_len(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		node_count += 1;
		h = h->next;
	}

	return (node_count);
}
