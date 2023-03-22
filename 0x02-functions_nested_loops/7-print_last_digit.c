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
		n = -(n);
	else
		n = n;
	n = (n % 10);
	_putchar('0' + n);
	return (n);
}

int main(void)
{
	_putchar('0' + print_last_digit(-98));
	return (0);
}
