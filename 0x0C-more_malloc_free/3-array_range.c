#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of size max- min
 * @min: start range
 * @max: end range
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int size = (max - min + 1);

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = min++;

	return (ptr);
}
