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
	int i = 0;
	int j;

	while (s[i] != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match++;
				break;
			}
			if (accept[j + 1] != '\0' && s[i] != accept[j])
				return (match);
		}
		i++;
	}
	return (match);
}
