#include <stdio.h>
#include <stdlib.h>

/**
 * _len - length of string
 * @s: target
 * Return: length of string
 */

int _len(char *s)
{
	int len = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		len++;

	return (len);
}


/**
 * _strdup - pointer to a newly allocated space in memory which
 * contains a copy of a string given as parameter
 * @str: strings
 * Return: NULL if str is null, pointer to new string which is duplicate
 * of str
 */

char *_strdup(char *str)
{
	char *arr;
	int i;

	if (str == NULL)
		return (NULL);

	arr = malloc(sizeof(char) * _len(str) + 1);
	if (arr ==NULL)
		return (0);

	for (i = 0; i < _len(str); i++)
	{
		arr[i] = str[i];
	}
	return (arr);
}
