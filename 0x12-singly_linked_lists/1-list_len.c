#include "lists.h"

/**
 * list_len - Count the number of elements in a linked list.
 * @h: A pointer to the head of the list.
 * Return: The number of elements in the list.
 */

size_t list_len(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		num++;
		h = h->next;
	}

	return (num);
}
