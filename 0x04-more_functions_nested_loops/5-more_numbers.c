#include <stdio.h>
#include "main.h"
/**
 * more_numbers - print t0 0 to 14 to times
 */
void more_numbers(void)
{
	int fn, ln, c, i;

	for (c = 1; c <= 10 ; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				ln = i % 10;
				fn = (i - ln) / 10;
				_putchar(fn + '0');
				_putchar(ln + '0');
			}
			else
			_putchar(i + '0');
		}
		_putchar(10);
	}
}
