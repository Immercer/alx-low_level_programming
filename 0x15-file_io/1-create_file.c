#include "main.h"

/**
 * _len- find length of a string
 * @str: target string
 * Return: length of string
 */
int _len(char *str)
{
	int count = 0;

	while (str[count] != '\0')
		count++;
	return (count);
}

/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content of file
 * Return: 1 on success , -1 failure
 */
int create_file(const char *filename, char *text_content)
{

	int fd, c;

	if (!filename)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
	return (1);
}
