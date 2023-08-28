#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: Pointer to a pointer to the head of the linked list.
 * @n: Value to be added to the new node.
 * Return: Address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    listint_t *new;
    listint_t *current;

    new = malloc(sizeof(listint_t));

    if (new == NULL)
	    return (NULL);
    if (*head == NULL)
    {
	    *head = new;
    }
    else
    {
	    current = *head;
	    while (current->next != NULL)
	    {
		    current = current->next;
	    }
	    current->next = new;
    }
    new->n = n;
    new->next = NULL;

    return (new);
}
