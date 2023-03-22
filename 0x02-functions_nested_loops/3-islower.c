#include <stdio.h>
#include "main.h"
/**
 * _islower - Prototype to identify lower case alphabets
 * Return: Always 1 if character is lower else 0
 * @c: must be a c surround be '' or a number
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
