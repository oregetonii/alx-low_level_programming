#include "lists.h"

/**
 * reverse_listint - reverses linked list
 * @head: pointer to head pointer of linked list
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *back, *next;

	/* account for no ptr and empty list */
	if (head == NULL || *head == NULL)
		return (NULL);

	/* list reversal loop */
	back = NULL;
	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = back; 
		back = *head; 
		*head = next; 
	}
	(*head) = back; 
	return (*head);
}
