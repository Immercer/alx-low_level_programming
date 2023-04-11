#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - 2D grid
 * @width: width
 * @height: height
 * Return: grib or null
 */

int **alloc_grid(int width, int height)
{
	int **_dimension;
	int i, j;

	_dimension = malloc(sizeof(int *) * height);

	if (_dimension == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		_dimension[i] = malloc(sizeof(int) * width);
		if (_dimension[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(_dimension[j]);
			}
			free(_dimension);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			_dimension[i][j] = 0;
	}

	return (_dimension);
}
