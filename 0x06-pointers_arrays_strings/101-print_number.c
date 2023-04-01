#include "main.h"
/**
 * print_number - print number
 * @n: number
 */

void print_number(int n)
{
	unsigned int tens, digit, positive = n;
	double st = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}

		while (st <= positive)
			st *= 10;
		tens = st / 10;

		while (tens >= 1)
		{
			digit = positive / tens;
			_putchar(digit + '0');
			positive = (positive - (tens * digit));
			tens = tens / 10;

		}
	}
}
