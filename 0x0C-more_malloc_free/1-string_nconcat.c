#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen -calculate and return length
 * @string: target string
 * Return: length of string
 */

int _strlen(char *string)
{
	int i = 0;

	for (; string[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, _len, i, j;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	_len = _strlen(s1) + num + 1;

	ptr = malloc(sizeof(*ptr) * _len);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; j < num; j++)
		ptr[i + j] = s2[j];
	ptr[i + j] = '\0';

	return (ptr);
}
