#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copy argument 2 unto 1;
 * @dest: destination
 * @src: source variablei
 * Return: destination variable / copy
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
