#include "lists.h"

/**
 * free_list - Free a linked list.
 * @head: A pointer to the head of the list.
 */

void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;

	if (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
