#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - Write a function that allocates memory using malloc.
 * @b: memory space to allocatei
 * Return: pointer to memory block
 */

void *malloc_checked(unsigned int b)
{
	int *ptr = malloc(sizeof(unsigned int) * b);

	if (ptr == NULL)
		exit(-98);
	return (ptr);
}
