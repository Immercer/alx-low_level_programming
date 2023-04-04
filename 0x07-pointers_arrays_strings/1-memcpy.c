#include <stdio.h>
#include "main.h"
/**
 * _memcpy - copies data from one memory block to another
 * @dest: destination
 * @src: source
 * @n: size for source to be copied
 * Return:  destination filled with copy of source
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int size = n;
	int i = 0;

	for (; i < size; i++)
		*(dest + i) = *(src + i);
	return (dest);

}
