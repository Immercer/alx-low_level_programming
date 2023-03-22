#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prototype for printing lowercase alphabets 10x
 *
 */
void print_alphabet_x10(void)
{
	int i, counter = 0;

	while (counter < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar(10);
		counter++;
	}
}

