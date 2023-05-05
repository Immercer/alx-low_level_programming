#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @index: index
 * @n: target binary
 * Return: 1 or -1 if failed
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned int max_bit = sizeof(unsigned long int) * 8;

	if (index > max_bit)
		return (-1);
	mask <<= index;
	*n = *n | mask;

	return (1);
}
