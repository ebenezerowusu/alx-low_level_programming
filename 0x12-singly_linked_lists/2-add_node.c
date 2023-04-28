#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head pointer.
 * @str: string to store in the list.
 * Return: address of the head or return null.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_n;
	//size_t nchar;
	new_n = malloc(sizeof(list_t));
	if (new_n == NULL)
		return (NULL);
	new_n->next = *head;
	
	new_n->str = strdup(str);
	*head = new_node;
	
	if (new_n->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_n->len = strlen(str);
	

	return (*head);
}
