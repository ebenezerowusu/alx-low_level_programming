#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head pointer.
 * @str: string to store in the new node.
 * Return: address of the head or return null.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;
	
	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);
	new_n->next = *head;
	
	
	*head = new_n;
	new_n->str = strdup(str);
	
	if (new_n->str == NULL)
	{
		free(new_n);
		return (NULL);
	}
	new_n->len = strlen(str);
	

	return (*head);
}
