#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: converted interger
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0;
	int idx = 0;

	while (b[idx] != '\0')
	{
		if (b[idx] != '0' || b[idx] != '1')
			return (0);

		converted = converted << 1 | (b[idx] - '0');
		idx++;
	}
	return (converted);
}
