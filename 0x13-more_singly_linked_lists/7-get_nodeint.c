#include "lists.h"

/**
 * get_nodeint_at_index
 * @head: head of a list.
 * @index: index of the node.
 * Return: nth node. 
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index && head != NULL; a++)
	{
		head = head->next;
	}

	return (head);
}
