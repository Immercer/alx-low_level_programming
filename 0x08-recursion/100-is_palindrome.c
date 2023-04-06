#include <stdio.h>
#include "main.h"

/**
 * check_palindrome - check for string palindrome
 * @s: target string
 * @left: left index
 * @right: right index
 * Return: 0 or 1
 */

int check_palindrome(char *s, int left, int right)
{
	if (left >= right)
		return (1);
	if (s[left] != s[right])
		return (0);
	if (s[left] == s[right])
		return (check_palindrome(s, left + 1, right - 1));
}

/**
 * _len - find length of string
 * @string: target string
 * Return: number
 */

int _len(char *string)
{
	int counter = 0;

	for (int i = 0; string[i] != '\0'; i++)
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

	if (length == 0 || length == 1)
		return (1);
	else
		return (check_palindrome(s, 0, length));
}
