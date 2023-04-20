#include <stdlib.h>

/**
 * int_index - seachers for an integer
 * @array: target array
 * @size: size of array
 * @cmp: comapres integers
 * Return: -1 or found integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 0 || cmp == NULL || array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(*(array + i)))
			return (i);

	return (-1);
}
