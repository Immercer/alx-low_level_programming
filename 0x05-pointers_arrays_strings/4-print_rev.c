#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: poniter to string variables
 */

void print_rev(char *s)
{
	int len, counter;

	len = _strlen(s);
	counter = len;
	while (counter >= 0)
	{
		_putchar(s[counter]);
		counter--;
	}
	_putchar(10);
}
