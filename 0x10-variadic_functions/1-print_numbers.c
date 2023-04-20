#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int i;

	va_start(list, n);
	for (i = 0; i < (int)n; i++)
	{
		if (separator == NULL)
			printf("%d", va_arg(list, int));
		if (separator != NULL)
		{
			printf("%d", va_arg(list, int));
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
