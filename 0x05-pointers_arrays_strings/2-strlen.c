#include <stdio.h>
#include "main.h"
/**
 *_strlen - count string
 * @s: pointer to s
 * Return: value of count of string
 */
int _strlen(char *s)
{
	int i = 0;
	int counter = 0;

	while (s[i] != '\0')
	{
		counter++;
		i++;
	}
	return (counter);
}
