#include "list.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: Value to be added to the new node.
 * Return: Address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeoflistint_t);
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
