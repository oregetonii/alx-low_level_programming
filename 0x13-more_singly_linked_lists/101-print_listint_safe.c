#include "lists.h"

/**
 * count_nodes_till_loop - count nodes for the unique nodes to print
 * @head: pointer to head pointer of linked list
 * Return: number of unique nodes in list before a loop
 */
int count_nodes_till_loop(const listint_t *head)
{
	int count = 0;
	const listint_t *b, *c;

	b = c = head;

	while (b != NULL && c != NULL)
	{
		b = b->next;
		c = c->next->next;
		count++;

		if (b == c)
		{
			b = head;
			while (b != c)
			{
				b = b->next;
				c = c->next;
				count++;
			}
			return (count);
		}
	}
	return (0);
}

/**
 * loop - checks if there's a loop in linked list
 * @head: pointer to head pointer of linked list
 * Return: 0 if no loop, 1 if loop
 */
int loop(const listint_t *head)
{
	const listint_t *b, *c;

	b = c = head;

	while (b != NULL && c != NULL)
	{
		b = b->next;
		c = c->next->next;

		if (b == c)
			return (1);
	}
	return (0);
}

/**
 * print_listint_safe - prints list with addresses
 * @head: pointer to head pointer of linked list
 * Return: number of nodes in list, exit(98) if failed
 */
size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	int loop_found;
	size_t node_count = 0;
	const listint_t *tmp;

	if (head == NULL)
		exit(98);

	loop_found = loop(head);

	if (loop_found == 1) 
	{
		count = count_nodes_till_loop(head);
		for (loop_found = 0; loop_found < count; loop_found++)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			node_count += 1;
			tmp = tmp->next;
		}
	}
	else if (loop_found == 0) 
	{
		tmp = head;
		while (tmp != NULL)
		{
			printf("[%p] %d\n", (void *)tmp, tmp->n);
			node_count += 1;
			tmp = tmp->next;
		}
	}

	return (node_count);
}
