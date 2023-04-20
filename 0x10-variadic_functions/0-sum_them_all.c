#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all variables of function
 * @n: number of variables
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum = 0;
	int i;

	va_start(list, n);
	for (i = 0; i < (int)n; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
