#include <stdio.h>
#include "main.h"
/**
 * is_sqrt - square root of a number
 * @target: target number
 * @i: iterations
 * Return:  sqrt root of target or -1 if target has no prefect sqare
 */

int is_sqrt(int target, int i)
{
	if (i * i > target)
		return (-1);
	else if (i * i == target)
		return (i);
	else
		return (is_sqrt(target, i + 1));
}

/**
 * _sqrt_recursion - entry point
 * @n: target number
 * Return: is_sqrt to return sqrt or -1
 */

int _sqrt_recursion(int n)
{
	return (is_sqrt(n, 1));
}
