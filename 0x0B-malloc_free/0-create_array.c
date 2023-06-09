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
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (0);

	for (i = 0; i < (int)size; i++)
		arr[i] = c;

	return (arr);
}
