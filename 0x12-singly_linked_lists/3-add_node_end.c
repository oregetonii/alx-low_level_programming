#include "lists.h"

/**
 * _strlen - returns length of string
 * @str: string
 * Return: length
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	return (len);
}

/**
 * add_node_end - adds a new node to end of linked list
 * @head: linked list
 * @str: data for new node
 * Return: address of new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	if (str == NULL) 
		return (NULL);
	if (strdup(str) == NULL) 
		return (NULL);

	new_node = malloc(sizeof(list_t)); 
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str); 
	new_node->len = _strlen(str);
	new_node->next = NULL;

	if (*head == NULL) 
		*head = new_node;
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
	}

	return (new_node);
}
