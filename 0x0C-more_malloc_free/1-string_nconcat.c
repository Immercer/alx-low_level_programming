#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: 
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, j;
	int z = 0;

	char *ptr = malloc(sizeof(char) * (strlen(s1) + strlen(s2) + 1));

	if (ptr == NULL)
		return (NULL);
	
	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i]; 

	for (j = i; s2[z] != '\0'; z++)
	{
		ptr[i] = s2[z];
		i++;
	}
	
	return ptr;
}

int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}
