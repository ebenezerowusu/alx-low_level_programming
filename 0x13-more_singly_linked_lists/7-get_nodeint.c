#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * get_nodeint_at_index
 * @head: head of a list.
 * @index: index of the node.
 * Return: nth node. 
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int value = 0;

	while (head != NULL)
	{
		if (index == value)
			return (head);
		head = head->next;
		value++;
	}
	return (NULL);
}

