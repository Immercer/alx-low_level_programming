#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - print numbers to 98
 * @n: parameter must be a number
 *
 */
void print_to_98(int n)
{
	int i = n;

	if (i <= 98)
	{
		for (; i <= 98; i++)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
	else
	{
		for (; i >= 98; i--)
		{
			if (i != 98)
				printf("%d, ", i);
			else
				printf("%d\n", i);
		}
	}
}
