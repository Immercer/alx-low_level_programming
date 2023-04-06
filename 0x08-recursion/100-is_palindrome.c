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
 * @string: target string
 * Return: number
 */

int _len(char *string)
{
	int counter = 0;
	int i = 0;

	for (; string[i] != '\0'; i++)
		counter += 1;
	return (counter);
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
