 

#include "lists.h"
#include <stdlib.h>
/**
 * pop_listint - deletes the first node
 * @head: is a double pointer to the first node
 * Return: the (n) data of the first node or null if list is empty'
 */
int pop_listint(listint_t **head)
{
	int value;
	listint_t *tem;

	if (*head == NULL || head == NULL)
		return (0);
	value = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;
	return (value);
}

