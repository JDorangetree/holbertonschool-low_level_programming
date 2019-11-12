#include "holberton.h"
/**
 * append_text_to_file - Read a text file
 * @filename: header of the linked list to print
 * @text_content: header of the linked list to print
 * Return: number of nodes
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0, writer;
	char *empty = "";

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[len] != '\0')
			len++;
		writer = write(fd, text_content, len);
	}
	else
		writer = write(fd, empty, 0);
	if (writer == -1)
		return (-1);
	close(fd);
	return (1);
}
