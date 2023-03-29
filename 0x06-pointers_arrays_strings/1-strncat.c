#include <stdio.h>
#include "main.h"
/**
 * _strncat - concatenate two strings
 * @dest: destination
 * @src: source variable
 * @n: number of string
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[j] != '\0')
		j++;

	while (src[i] != src[n])
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
