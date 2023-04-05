#include <stdio.h>
#include "main.h"
/**
 * factorial - factorial of a number (n), return -1 if number is lower than 0
 * @n: target number
 * Return: factorial or -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

}
