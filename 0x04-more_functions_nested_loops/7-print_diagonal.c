#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - print a diagonal line
 * @n: line of diagonal line
 */
void print_diagonal(int n)
{
	int i, a;

	if (n <= 0)
		_putchar(10);
	for (i = 1; i <= n; i++)
	{
		a = i - 1;

		while (a)
		{
			_putchar(' ');
			a--;
		}
		_putchar(92);
		_putchar(10);
	}
}
