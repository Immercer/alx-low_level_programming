#include "main.h"

/**
 * _strspn - searches for the first occurence of a character in a string
 * @s: string to search
 * @accept: string to compare
 * Return: value
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j;
	int matches = 0;

	while (s[i] != '\0') /*iterate through string*/
	{

		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				matches++;
				break;
			}
			if (accept[j + 1] == '\0' && s[i] != accept[j])
				return (matches);
		}
		i++;
	}
	return (matches); /* return num if all match till end */

}

