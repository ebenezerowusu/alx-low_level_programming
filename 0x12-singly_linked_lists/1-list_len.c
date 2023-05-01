#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns then no. of size_t in a list.
 * @h: head pointer
 * Return: no. size_t
 */

size_t list_len(const list_t *h)
{
	size_t value = 0;
	while (h != NULL)
	{
		value++;
		h = h->next;
	}
	return (value);
}
