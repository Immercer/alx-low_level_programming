#include "main.h"

/**
 * flip_bits - number of bits you would need to flip to
 * get from one number to another
 * @n: use to flipping
 * @m: use in flipping
 * Return: number of bits needed to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int dbits = 0;
	unsigned long int d = n ^ m;

	do {
		dbits += (d & 1);
		d >> 1;
	} while
		d > 0;
	return (dbits);
}
