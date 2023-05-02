#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * free_listint2 - frees linked list and set the head to null
 * @head: is the pointer to the first node
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *value;

	if (head == NULL)
		return;

	while (*head)
	{
		value = (*head)->next;
		free(*head);
		*head = value;
	}
	*head = NULL;
}
