#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * is_num - checks if character is positive number
 * @arg: parameter
 * Return: 1 if @arg is a positive number else 0
 */

bool is_num(char *arg)
{
	int i = 0;

	for (i = 0; arg[i]; i++)
	{
		if (arg[i] >= '0' && arg[i] <= '9')
			return (1);
	}
	return (0);
}

/**
 * main - entry point
 * @argc: numbers of paramters passed to main
 * @argv: paramater to main
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (is_num(argv[i]))
				sum +=  atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
			printf("%d\n", sum);
	}
	return (0);
}
