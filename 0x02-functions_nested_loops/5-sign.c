#include <stdio.h>
#include "main.h"
/**
 * print_sign - print sign of a number
 * @n: a number
 * Return: 0 if n is 0, 1 if n is greater than 0 or n is negative
 *
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('-');
		return (1);
	}
}
