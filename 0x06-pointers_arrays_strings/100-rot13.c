#include <stdio.h>
#include "main.h"
/**
 * rot13 - prints string encoded in rot13
 * @s: string to be encoded
 * Return: encoded string
 */
char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 65 && s[i] <= 78 || s[i] >= 97 && s[i] <= 110)
			s[i] = s[i] + 13;
		else if (s[i] >= 79 && s[i] <= 90 || s[i] >= 111 && s[i] <= 122)
			s[i] = s[i] - 13;
		else
			s[i] = s[i];
		i++;
	}
	return (s);
}
