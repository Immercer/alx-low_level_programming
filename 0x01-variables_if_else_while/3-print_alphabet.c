#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int lowercase;
	int uppercase;

	for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
	{
		putchar(lowercase);
	}
	for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
	{
		putchar(uppercase);
	}
	putchar(10);
	return (0);
}
