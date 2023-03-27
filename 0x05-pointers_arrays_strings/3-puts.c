#include <stdio.h>
#include "main.h"
/**
 * _puts - prints strings to the standard output
 * @str: pointer string variable
 **/
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar(10);
}

