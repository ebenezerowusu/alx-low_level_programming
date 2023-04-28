#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - returns then number of elements in a list.
 * @h: head pointer
 * Return: number of size_t
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
