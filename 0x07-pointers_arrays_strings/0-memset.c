#include <stdio.h>
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
	int i;
	
	for (i = 0; i < b; i++)
		s[i] = b;

	return (s);
}
