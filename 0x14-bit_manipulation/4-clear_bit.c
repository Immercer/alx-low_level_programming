#include "main.h"

/**
 * clear_bit - sets the bit to 0 at a given index
 * @n: target binary number
 * @index: target index
 * Return: 1 or -1 if failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1;
	unsigned long int max_bit = sizeof(unsigned long int) * 8;

	if (index > max_bit)
		return (-1);

	mask = ~(mask << index);
	*n = (*n & mask);

	return (1);

}
