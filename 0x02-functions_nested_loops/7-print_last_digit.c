#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - last digit of a number
 * @n: user n
 * Return: return last number of n
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = -(n);
		_putchar('0' + n);
	}
	else
	{
		n = n;
		_putchar('0' + n);
	}
	n = (n % 10);
	return (n);
}

