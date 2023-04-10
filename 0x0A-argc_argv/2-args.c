#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of paramters
 * @argv: pointer to parameters pass to main
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
