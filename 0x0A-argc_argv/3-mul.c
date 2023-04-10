#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: parameters passed
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int mult = 0;

	if (argc > 2)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
	}
	else
		printf("Error\n");

	return (0);
}
