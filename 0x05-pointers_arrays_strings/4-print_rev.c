#include <stdio.h>
#include "main.h"
/**
 * _strlen - length of string
 * Return: length
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
	return (c);
}

/**
 * print_rev - print string in reverse
 * @s: string variable
 */
void print_rev(char *s)
{
	int len, counter;

	len = _strlen(s);
	counter = len - 1;
	while (counter >= 0)
	{
		_putchar(s[counter]);
		counter--;
	}
	_putchar(10);
}
