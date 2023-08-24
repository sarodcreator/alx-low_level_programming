#include "lists.h"

/**
 * free_list - Free a linked list.
 * @head: A pointer to the head of the list.
 */

void free_list(list_t *head)
{
	if (head == NULL)
	{
		list_t *temp = head;

		head = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
