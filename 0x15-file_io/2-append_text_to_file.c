#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: character
 *
 * Return: Always 0
*/

int _strlen(char *s)
{
	int len = 0;


	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len;
	int w;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);

	len = _strlen(text_content);
	w = write(fd, text_content, len);
	if (w == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
