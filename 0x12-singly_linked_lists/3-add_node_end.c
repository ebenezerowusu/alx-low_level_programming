#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end
 * @head: head of the linked list.
 * @str: string to store in the list.
 * Return: address of the head node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new; 
	list_t *tem = *head;
	
	

	new = malloc(sizeof(list_t));
	
	if (!new)
		return (NULL);
	
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	if (tem != NULL)
	{
		
		while (tem->next != NULL)
			tem = tem->next;
		tem->next = new;
		return (new);
	}
	else
	{
		*head = new;
		return (new);
	}
}
