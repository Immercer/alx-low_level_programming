#include "main.h"
/**
 * print_square - print a square followed by a new line
 * @size: size of square
 */
void print_square(int size)
{
	int i, a;

	if (size <= 0)
		_putchar(10);
	for (i = 1; i <= size; i++)
	{
		a = size;
		while (a)
		{
			_putchar('#');
			a--;
		}
		_putchar(10);
	}
}
