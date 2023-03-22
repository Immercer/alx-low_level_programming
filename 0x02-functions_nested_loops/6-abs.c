#include <stdio.h>
#include "main.h"
/**
 * _abs - Prototype for the abasolute value of a number
 * Return: absolute value
 * @n: number
 */
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else
		n = n;
	return (n);
}
