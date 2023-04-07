#include <stdio.h>
#include "main.h"

/**
 * check_palindrome - check for string palindrome
 * @left: left index
 * @right: right index
 * Return: 0 or 1
 */

int check_palindrome(char *left, char *right)
{
	if (left >= right)
		return (1);
	if (*left == *right)
		return (check_palindrome(left + 1, right - 1));

	return (0);
}

/**
 * _len - find (length of string
 * @ptr: target string
 * Return: number
 */

int _len(char *ptr)
{
	if (*ptr == '\0')
		return (0);
	ptr++;
	return (1 + _len(ptr));
}

/**
 * is_palindrome - determines if a string is a palindrome
 * @s: target string
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	int length = _len(s) - 1;

	return (check_palindrome(s, (s + length)));
}
