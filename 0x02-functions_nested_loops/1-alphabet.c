#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Print alphabets in lowercase using _putchar()
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar(10);
}
