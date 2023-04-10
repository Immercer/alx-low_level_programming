#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @argv: pointers to parameters
 * @argc: number of arguments passed
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc > 0)
		printf("%d\n", argc - 1);
	return (0);
}
