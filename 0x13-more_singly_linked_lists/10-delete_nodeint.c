#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given position
 * @head: pointer to head pointer of linked list
 * @index: index to delete node
 * Return: 1 if succeeded, or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *mid1, *mid2;

	/* check for empty list */
	if (*head == NULL)
		return (-1);

	mid1 = *head;

	/* deleting at first node */
	if (index == 0)
	{
		*head = mid1->next;
		free(mid1);
		return (1);
	}

	/* loop mid1 througiterateto one index prior to deletion */
	while (i < (index - 1) && mid1 != NULL)
	{
		mid1 = mid1->next;
		i++;
	}

	/* out-of-range index */
	if (i != (index - 1) || mid1->next == NULL)
		return (-1);

	/* link prior index before deletion */
	mid2 = mid1->next;
	mid1->next = (mid1->next)->next;
	free(mid2);

	return (1);
}
