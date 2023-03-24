#include <stdio.h>
#include <stdbool.h>
/**
 * main - entry point
 * is_prime: prime numbers
 * Return: true or false
 * @num: integer
 */
bool is_prime(long long num)
{
	if (num < 2)
		return (false);
	for (long long i = 2; i * i <= num; i++)
	{
		if (num % i == 0)
			return (false);
	}
	return (true);
}

int main(void)
{
	long long n = 612852475143;
	long long largest_factor = 0;

	for (long long i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			if (is_prime(i))
				largest_factor = i;
		if (is_prime(n / i))
			largest_factor = (n / i);
		}
	}
	printf("%lld\n", largest_factor);
	return (0);
}

