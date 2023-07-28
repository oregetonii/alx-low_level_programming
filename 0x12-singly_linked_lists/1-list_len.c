#include "lists.h"

/**
 * list_len - returns the length of linked list
 * @h: linked list
 * Return: the length of linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
