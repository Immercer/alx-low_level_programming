#include "main.h"
/**
 * more_numbers - print t0 0 to 14 to times
 */
void more_numbers(void)
{
	int fn;
	int c = 0;
	int i = 0;

	for (c = 1; c <= 10 ; c++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				fn = (i) / 10;
				_putchar(fn + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar(10);
	}
}
