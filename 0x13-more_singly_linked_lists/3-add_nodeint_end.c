#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint_end - add a new node at the end of a linked list
 * @head: head of a pointer list.
 * @n: value of the store new node
 * Return: address of the new element. NUll if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *value;
	listint_t *temp = *head;

	value = malloc(sizeof(listint_t));

	if (value == NULL)
		return (0);

	value->n = n;
	value->next = NULL;

	if (*head == NULL)
	{
		*head = value;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = value;
	}

	return (*head);
}
