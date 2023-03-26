#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		if (a > b && b < c)
		{
			if (a < c)
				largest = c;
	}
		else
			largest = a;
	}
	else if (b > a && a > c)
	{
		if (b > a && a < c)
		{
			if (b < c)
				largest = c;
		}
		else
			largest = b;
	}
	else if (c > a || c > b)
	{
		if (b > c)
			largest = b;
		if (a > c)
			largest = a;
		else
			largest = c;
	}
	else if (a == b)
	{
		if (a > c)
			largest = a;
		else
			largest = c;
	}
	else if (b == c)
	{
		if (b > a)
			largest = b;
		else
			largest = a;
	}
	else if (c == a)
	{
		if (c > b)
			largest = c;
		else
			largest = b;
	}else 
		largest = c;

return (largest);
}
