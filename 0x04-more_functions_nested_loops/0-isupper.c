#include "main.h"
/**
 * _isupper - Identify uppercase letters
 * @c : a number or letter
 * Return: 0 if c is lowercase 1 if c if uppercase
 */
int _isupper(int c)
{
	if (c >= 41 && c <= 90)
		return (1);
	else
		return (0);
}
