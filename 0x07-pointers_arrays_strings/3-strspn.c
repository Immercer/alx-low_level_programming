#include "main.h"

/**
 * _strspn - searches for the first occurence of a character in a string
 * @s: string to search
 * @accept: string to compare
 * Return: value
 */
unsigned int _strspn(char *s, char *accept)
{
	int match = 0;
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				match++;
				break;
			}
			if (accept[j + 1] != '\0' && s[i] != accept[j])
				return (match);
		}
	}
	return (match);
}
