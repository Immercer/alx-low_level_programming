#include <stddef.h>

/**
 * array_iterator - apply a function (action to each element of array)
 * @array: src
 * @size: size of array
 * @action: function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array != NULL && action != NULL)
		for (i = 0; i < (int)size; i++)
			action(*(array + i));
}
