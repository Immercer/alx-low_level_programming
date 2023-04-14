#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - alloctae memory and set values to 0
 * @nmemb: size of array
 * @size: size of datatype
 * Return: Point to array with values 0 or returns NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb <= 0 || size <= 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
