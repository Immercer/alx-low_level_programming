#include "main.h"

/**
 * get_bit - get a bit at an index
 * @n: binary number
 * @index: target index
 * Return: found binary- 0, 1, 0r -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;
	unsigned int max_bits;

	max_bits = (sizeof(unsigned long int));
	if (index > max_bits)
		return (-1);
	bit = (n >> index) & 1;

	return (bit);
}
