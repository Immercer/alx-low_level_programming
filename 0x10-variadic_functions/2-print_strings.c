#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - a function that prints strings, followed by a new line
 * @separator: string to be printed betweent the strings
 * @n: number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	int i;

	va_start(list, n);
	for (i = 0; i < (int)n; i++)
	{
		char *str = va_arg(list, char *);

		if (separator == NULL)
		{
			if (str == NULL)
				printf("nil");
			else
				printf("%s", str);
		}
		if (separator != NULL)
		{
			if (str == NULL)
				printf("nil");
			else
				printf("%s", str);
			if (i != (int)n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");

	va_end(list);
}

