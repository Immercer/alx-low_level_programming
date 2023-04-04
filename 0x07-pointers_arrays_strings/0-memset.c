#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory location pointed to
 * @b: constant byte
 * @n: number of byte to fill
 * Return: memory block
 */
char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			*(s + i) = b;
	}

	return (s);
}
