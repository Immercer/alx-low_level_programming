#include "main.h"

/**
 * _len - lenght of string
 * @str: target string
 * Return: lenght
 */
int _len(char *str)
{
	int count = 0;

	while (str[count] != '\0')
		count++;
	return (count);
}

/**
 * append_text_to_file - function that appends
 * text at the end of a file.
 * @filename: filename
 * @text_content: file content
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, c;

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

	c = write(fd, text_content, _len(text_content));
	if (c == -1 || c != _len(text_content))
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (-1);
}
