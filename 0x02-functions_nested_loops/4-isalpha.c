#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Prototype to identity alphabets
 * @c: input must be a letter surrounded by '' or a number
 * Return: Always 1 if c is a letter else 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return 1
	else
		return 0
}
