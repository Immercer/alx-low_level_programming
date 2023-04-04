#include "main.h"

/**
 * _strpbrk - return pointer to byte in s which matches byte in accept
 * @s: string
 * @accept: target
 * Return: pointer to index of string
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				s = &s[i];
				return (s);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
