#include "lists.h"

/**
 * free_list - Free a linked list.
 * @head: A pointer to the head of the list.
 */

void free_list(list_t *head)
{
	list_t *present = head;
	list_t *next;

	while (head != NULL)
	{
		next = present->next;
		free(present->str);
		free(present);
		present = next;
	}
}
