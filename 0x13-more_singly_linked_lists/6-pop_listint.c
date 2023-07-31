#include "lists.h"

/**
 * pop_listint - deletes the head node, and returns the head node’s data
 * @head: linked list
 * Return: deleted head node's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *mid;

	if (*head == NULL) 
		return (0);

	mid = *head;

	data = mid->n; /* capture data */

	*head = mid->next; /* link head to next node */
	free(mid);

	return (data);

}
