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
 * is_palindrome - determines if a string is a palindrome
 * @s: target string
 * Return: 1 or 0
 */

int is_palindrome(char *s)
{
	int len = 0;

	while (s[len] != '\0')/**finding length of string*/
		len++;
	int i = len - 1;

	if (i == 0 || i == 1)
		return (1);
	else
		return (check_palindrome(s, 0, i));
}
