#include <stdio.h>
#include "main.h"
/**
 * _strlen - length of string
 * @s : pointer to string parameter
 * Return: length of s
 */
int _strlen(char *s)
{
	int i = 0;
	int c = 0;

	while (s[i] != '\0')
	{
		i++;
		c++;
	}
	return (c);
}

/**
 * rev_string - reverse a string
 * @s: pointer varible of type char
 */

void rev_string(char *s)
{
	char temp;
	int start, end;

	end = _strlen(s) - 1;
	start = 0;
	while (start < end)
	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
