#include <stdio.h>
#include "main.h"
/**
 * _isdigit - identify a number between 0-9
 * @c: any character
 * Return: 1 if c is a number
 */
int _isdigit(int c)
{
	if (c >= 48 a && c <= 57)
		return (1);
	else
		return (0);
}
