#include "lists.h"

/**
 * _strlen - returns length of string
 * @s: string
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * add_node_end - adds a new node at the end of  list_t list
 * @head: head of linked list
 * @str: string to be used as data for node
 * Return: number of elements
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newest;
	char *string;
	list_t *temp;

	temp = *head;
	newest = malloc(sizeof(list_t));
	if (newest == NULL)
		return (NULL);

	if (str == NULL)
		return (NULL);

	string = strdup(str);
	if (string == NULL)
	{
		free(newest);
		return (NULL);
	}

	newest->len = _strlen(str);
	newest->str = string;
	newest->next = NULL;

	if (*head == NULL)
	{
		*head = newest;
		return (newest);
	}

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = newest;

	return (newest);
}
