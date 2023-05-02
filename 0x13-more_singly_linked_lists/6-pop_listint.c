#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * pop_listint - deletes the head node
 * @head : pointer to the head of the linked list
 * Return: head node's data (n) of the first node
 *    
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;
	
	temp = *head;
	
	if (temp == NULL)
		return (0);

	*head = temp->next;
	value = temp->value;
	free(temp);

	return (value);
}

