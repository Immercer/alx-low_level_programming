#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: poniter to string variables
 */

int _strlen(char *s)
{	
	int i = 0;
	int c = 0;
	while (s[i] != '\0')
	{
		c++;
		i++;
	}
	return c;
}

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
