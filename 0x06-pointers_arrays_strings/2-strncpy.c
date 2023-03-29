#include <stdio.h>
#include "main.h"
/**
 * _strncpy - copy of string
 * @dest : destination
 * @src: source
 * @n: length
 * Return: destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != src[n])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
