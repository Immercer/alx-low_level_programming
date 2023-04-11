#include <stdio.h>
#include <stdlib.h>

/**
 * _len- length strings
 * @s: target string
 * Return: newly allocated space containing s1 + s2
 */
int _len(char *s)
{
	int i = 0;
	int len = 0;

	for (; s[i] != '\0'; i++)
		len++;

	return (len);
}

/**
* str_concat- concatenates 2 strings
* @s1: target number
* @s2: target number
* Return: newly allocated space containing s1 + s2
*/

char *str_concat(char *s1, char *s2)
{
	if (s1 == s2)
		return (0);
	int a = 0;
	int i, j;
	char *arr;

	arr = malloc(sizeof(char) * (_len(s1) + _len(s2) + 1));

	if (arr == NULL)
		return (0);

	for (i = 0; i < _len(s1); i++)
		arr[i] = s1[i];

	for (j = _len(s1); j < (_len(s1) + _len(s2)); j++)
	{
		arr[j] = s2[a];
		a++;
	}
	return (arr);
}
