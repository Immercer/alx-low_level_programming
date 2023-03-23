#include <stdio.h>
#include "main.h"
/**
 * print_line - draws a straight line
 * @n: lenght of line
 */
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar(10);
}
