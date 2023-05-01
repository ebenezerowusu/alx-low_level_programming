#include "lists.h"

/**
 * print_listint - prints all the elment of the list.
 * @h: head of the list
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t values = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		values++;
	}
	return (values);
}
