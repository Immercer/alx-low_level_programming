#include <stdio.h>
#include "main.h"
/**
 * times_table - Print the 9 times table
 *
 */
void times_table(void)
{
	int i, j, multiple, ln, fn;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			multiple = i * j;
			if (multiple > 9)
			{
				ln = multiple % 10;
				fn = (multiple - ln) / 10;
				_putchar(',');
				_putchar(' ');
				_putchar(fn + '0');
				_putchar(ln + '0');		
			}
			else
			{
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(multiple + '0');
			}
		}
		_putchar(10);
	}
}

int main()
{
	times_table();
}
