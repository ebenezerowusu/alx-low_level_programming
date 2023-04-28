#ifndef _LISTS_
#define _LISTS_

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @lenght: length of the string
 * @next: points to the next node
 *
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

list_t *add_node_end(list_t **head, const char *str);
size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
void free_list(list_t *head);
list_t *add_node(list_t **head, const char *str);

#endif
