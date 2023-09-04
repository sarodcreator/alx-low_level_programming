#include "main.h"

/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */

int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * append_text_to_file - append text exclusively
 * @filename: name of the file
 * @text_content: text to append
 * Return: 1, -1 if error
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int n_append;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	n_append = write(fd, text_content, _strlen(text_content));
	if (n_append == -1 || n_append != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}

