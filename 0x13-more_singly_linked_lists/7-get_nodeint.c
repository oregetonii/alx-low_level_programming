#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of linked list
 * @head: pointer to head pointer of linked list
 * @index: nth node
 * Return: nth node, else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((i < index) && head != NULL) /* loop through the list */
	{
		head = head->next;
		i++;
	}

	if (i == index) /* check if index was within list size */
		return (head);

	return (NULL);
}
