#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - last digit of a number
 * @n: user n
 * Return: return last number of n
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}


