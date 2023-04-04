#include <stdio.h>
#include "main.h"
/**
 * _strchr - searches for a character in a string
 * @s : string
 * @c : character to search
 * Return: matching character
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
			return (&s[i]);
		i++;
	}
}
