#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - return pointer to byte in s which matches byte in accept
 * @s: string
 * @accept: target
 * Return: pointer to index of string
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				s = &s[i];
				return (s);
			}
		}
	}

	return (NULL);
}
