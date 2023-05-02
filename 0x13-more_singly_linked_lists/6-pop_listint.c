#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * pop_listint - deletes the first node
 * @head: is a double pointer to the first node
 * Return: the (n) data of the first node or null if list is empty'
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	value = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (value);
}
