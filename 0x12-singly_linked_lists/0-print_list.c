#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer of the head pointer.
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t value;
	value = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		value++;
		h = h->next;
	}
	return (value);
}
