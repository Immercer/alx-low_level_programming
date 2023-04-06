#include <stdio.h>
#include "main.h"
/**
 * find_prime: uses recursion to determine if a number greater than 1 is prime
 * @n : target number
 * Return: 0 if number is not prime or 1 if number is prime
 */
int find_prime(int n)
{
	if (n < 1)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (find_prime(n - 2));
}

/**
 * is_prime_number - uses find_prime to return prime number
 * @n:  target number
 * Return: find_prime or 0 is number is 1
 */

int is_prime_number(int n)
{
	if (n == 1)
		return (0);
	else
		return (find_prime(n));
}

