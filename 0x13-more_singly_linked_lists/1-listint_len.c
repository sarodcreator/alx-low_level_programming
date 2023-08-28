#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t list.
 * @h: Pointer to the head of the linked list.
 * Return: The number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t element_count;

	element_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		element_count++;
	}

	return (element_count);
}
