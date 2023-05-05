#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: target integer
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int count = 0;
	int i = 0;
	int bit = 0;

	while (n)
	{
		n >>= 1;
		count += 1;
	}
	count -= 1;

	if (count > 0)
	{
		mask = mask << count;
	}

	for (; i <= count; i++)
	{
		bit = n & mask ? '1' : '0';
		_putchar(bit);
		n >>= 1;
	}
}
