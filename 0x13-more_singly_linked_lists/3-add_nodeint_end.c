#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: pointer to head pointer of linked list
 * @n: data for the new node
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new_node, *mid;

	new_node = malloc(sizeof(listint_t)); 
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL) 
		*head = new_node;
	else
	{
		mid = *head; 

		while (mid->next != NULL) 
			mid = mid->next;
		mid->next = new_node; 
	}

	return (new_node);
}
