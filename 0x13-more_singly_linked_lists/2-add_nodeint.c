#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of the list
 * @head: head node
 * @n: is the value
 *
 * Return: the memory address of the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *value;

	value = malloc(sizeof(listint_t));

	if (value == NULL)
		return (NULL);

	value->n = n;
	value->next = *head;
	*head = value;

	return (*head);
}
