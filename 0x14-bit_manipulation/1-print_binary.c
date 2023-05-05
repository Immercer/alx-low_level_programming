#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: target integer
 */
void print_binary(unsigned long int n)
{
	int bit;
	int i;
	long int mask;

	mask = 128;
	i = 0;

	for (; i <= 7; i++)
	{
		bit = n & mask ? '1' : '0';
		putchar(bit);
		n >>= 1;
	}

}
