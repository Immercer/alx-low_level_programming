#include "main.h"

/**
 * __exit - prints error msg and exit with a value
 * @err: exit value of file dscriptor
 * @s: string
 * @fd: file descriptor
 * Return: 0
 */
int __exit(int err, char *s, int fd)
{
	switch (err)
	{
	case 97:
		dprintf(2, "usage: cp file_from file_to\n");
		exit(err);
	case 98:
		dprintf(2, "Error: Can't read from file %s\n", s);
		exit(err);
	case 99:
		dprintf(2, "Error: Can't write to %s\n", s);
		exit(err);
	case 100:
		dprintf(2, "Error: Cant close fd %d\n", fd);
		exit(err);
	default:
		return (0);
	}
}

/**
 * main -copies one fiel to another
 * @argc: is 3
 * @argv: fd1 - src file , fd2 -destination file
 * Return: 0, 97,98, 99 0r 100
 */
int main(int argc, char *argv[])
{
	int fd1, fd2, n, c;
	char *buff[1024];

	if (argc != 3)
		__exit(97, NULL, 0);

	fd2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0644);
	if (fd2 == -1)
		__exit(99, argv[2], 0);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
		__exit(98, argv[1], 0);

	while ((n = read(fd1, buff, 1024)) != 0)
	{
		if (n == -1)
			__exit(98, argv[1], 0);

		c = write(fd2, buff, n);
		if (c == -1)
			__exit(99, argv[2], 0);
	}
	if (close(fd2) == -1)
		__exit(100, NULL, fd2);
	else
		close(fd2);
	if (close(fd1) == -1)
		__exit(100, NULL, fd1);
	else
		close(fd1);
	return (0);

}
