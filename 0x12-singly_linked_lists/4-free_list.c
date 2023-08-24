#include "lists.h"

/**
 * free_list - Free a linked list.
 * @head: A pointer to the head of the list.
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
}
