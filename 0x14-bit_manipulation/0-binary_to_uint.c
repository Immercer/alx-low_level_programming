#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to string of 0 and 1 chars
 * Return: converted interger
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int converted = 0;
	int idx = 0;
	int power = 1;

	while (b[idx] != '\0')
		idx += 1;
	idx--;

	while (idx >= 0)
	{
		if (b[idx] != '0' && b[idx] != '1')
			return (0);

		converted += (b[idx] - '0') * power;
		power *= 2;
		idx--;
	}
	return (converted);
}
