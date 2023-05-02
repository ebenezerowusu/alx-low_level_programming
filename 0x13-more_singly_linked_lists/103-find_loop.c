#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a list.
 * Return: the address of the node where the loop starts.
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node1;
	listint_t *node2;

	node1 = head;
	node2 = head;
	while (head && node1 && node1->next)
	{
		head = head->next;
		node1 = node1->next->next;

		if (head == node1)
		{
			head = node2;
			node2 =  node1;
			while (1)
			{
				node1 = node2;
				while (node1->next != head && node1->next != node2)
				{
					node1 = node1->next;
				}
				if (node1->next == head)
					break;

				head = head->next;
			}
			return (node1->next);
		}
	}

	return (NULL);
}
