#include "lists.h"

/**
 * find_listint_loop - finds loop in linked list
 * @head: pointer to head pointer of linked list
 * Return: address of node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *come_round, *go_round;

	/* determine if loop exists by checking if come_round and go_round meet */
	come_round = go_round = head;

	while (come_round != NULL && go_round != NULL)
	{
		come_round = come_round->next;
		go_round = go_round->next->next;

		if (come_round == go_round)
		{
			/* finding loop origin */
			come_round = head;
			while (come_round != go_round)
			{
				come_round = come_round->next;
				go_round = go_round->next;
			}
			return (come_round);
		}
	}

	return (NULL);
}
