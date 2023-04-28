#include <stdlib.h>
#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	size_t n;
	list_t hello = {"World", 5, NULL};
	list_t *head;
	list_t *new;
	new = malloc(sizeof(list_t));
	head = &hello;
	if (new == NULL)
	{
		printf("Error\n");
		return (1);
	}
	new->str = strdup("Hello");
	new->len = 5;
	new->next = head;
	head = new;
	n = print_list(head);
	printf("-> %lu elements\n", n);

	printf("\n");
	free(new->str);
	new->str = NULL;
	n = print_list(head);
	printf("-> %lu elements\n", n);
	free(new);
	return (0);
}
