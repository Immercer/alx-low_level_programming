#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of array
 * @c: characteR
 * Return: NULL if size is 0, pointer to array
 */

char *create_array(unsigned int size, char c)
{
	int i;

	if (size == 0)
		return (NULL);

	char *arr = malloc(sizeof(int) * size);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
