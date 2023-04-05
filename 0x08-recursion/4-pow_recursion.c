#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - return  the value of x raised by power of y
 * @x: base number
 * @y: exponent
 * Return: value of x exponent y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
