#include <stdio.h>
#include "main.h"
/**
 * _strlen - print length of string
 * @s: parameter of type pointer to char
 * Return: length
 */
int _strlen(char *s)
{
	int c = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		c++;
		i++;
	}
	return (c);
}

/**
 * puts_half - prints half a string
 * @str: parameter to string
 */

void puts_half(char *str)
{
	int i = 0;
	int len = _strlen(str);

	if (len % 2 != 0)
	{
		i = (len / 2) + 1;
	}
	else
	{
		i = (len / 2);
	}
	while (i < len)
	{
		_putchar(*(str + i));
		i++;
	}
	_putchar(10);
}
