#include <stdio.h>
#include "main.h"
/**
 * _strcmp - compares two strings
 * Return: 0 if strings are same else +n or -n
 * @s1: string 1
 * @s2: string 2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (1)
	{
		if (s1[i] - s2[i] != 0)
			return (s1[i] - s2[i]);
		if (s1[i] == '\0' || s2[i] == '\0')
			return (0);
		i++;
	}
}
