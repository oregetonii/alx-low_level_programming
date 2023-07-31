#include "lists.h"

/**
 * insert_nodeint_at_index - insert a new node at a given position
 * @head: pointer to head pointer of linked list
 * @idx: index to insert new node
 * @n: data for new node
 * Return: address of new node, else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	unsigned int i = 0;
	listint_t *new_node, *mid;

	/* check for empty pointer */
	if (head == NULL)
		return (NULL);

	/* allocate mem and set values for new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* account for 0 index */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* loop to 1 before nth index to insert */
	mid = *head;
	while (i < (idx - 1))
	{
		mid = mid->next;
		i++;

		if (mid == NULL) /* account for out-of-range index */
		{
			free(new_node);
			return (NULL);
		}
	}

	/* link into list */
	new_node->next = mid->next;
	mid->next = new_node;
	return (new_node);
}
