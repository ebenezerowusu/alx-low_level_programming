#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - return the number of elements in a list
 * @h: is the pointer to the head node
 * Return: number of elements or nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t value = 0;

	while (h != NULL)
	{
		h = h->next;
		value++;
	}
	return (value);
}
