#include "main.h"
#define NULL 0

char *strstr(char *haystack, char *needle)
{
	int i, j, z;

	if (needle[0] == '\0')
		return (haystack);
	for (int i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			z = i, j = 0;
			while (needle[j] != '\0')
			{
				if (haystack[z] == needle[j])
					z++, j++;
				else
					break;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
	}
	return (NULL);
}
