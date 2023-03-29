#include <stdio.h>
#include "main.h"
/**
 * _strlen - lenght of string
 * @s: pointer to char
 * Return: lenght
 */
int _strlen(char *s)
{
	int c = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		c++;
		i++;
	}
	return (c);
}
/**
 * _strcat - concatenates two strings
 * @dest: dest
 * @src: src
 * Return: pointer to result
 */
char *_strcat(char *dest, char *src)
{
	int i, len;
	int j = 0;

	len = _strlen(dest);
	i = len;
	while (src[j] != '\0' || j < _strlen(src))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
