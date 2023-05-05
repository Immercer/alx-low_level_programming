#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: target integer
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1, chk = n;
	int count = 0;

	int bit = 0;

	while (chk)
	{
		chk >>= 1;
		count += 1;
	}
	count -= 1;

	if (count > 0)
		mask = mask << count;

	for (; mask > 0; mask >>= 1)
	{
		bit = n & mask ? '1' : '0';
		_putchar(bit);
		n >>= 1;
	}
}
