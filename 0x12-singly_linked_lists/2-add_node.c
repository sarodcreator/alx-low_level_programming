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
 * add_node - adds a new node at the beginning of  list_t list
 * @head: head of linked list
 * @str: string to be used as data for node
 * Return: number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newest;
	char *string;
	int length;

	newest = malloc(sizeof(list_t));
	if (newest == NULL)
		return (NULL);
	if (str == NULL)
	{
		string = NULL;
		length = 0;
	}
	else
	{
		string = strdup(str);
		length = _strlen(str);
	}
	newest->len = length;
	newest->next = *head;
	newest->str = string;
	*head = newest;

	return (*head);
}

