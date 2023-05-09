#include "main.h"

/**
 * read_textfile -a function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: filename
 * @letters:  the number of letters it should read and print
 * Return: 0 if NULL values , -1 error , n number bytes printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t n, c;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	n = read(fd, buffer, letters);
	if (n == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	c = write(1, buffer, n);
	if (c == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	return (n);
}
