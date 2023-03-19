#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int number = 48;
	int alphabet = 97;

	while (number <= 57)
	{
		putchar(number);
		number++;
	}
	while (alphabet <= 102)
	{
		putchar(alphabet);
		alphabet++;
	}
	putchar(10);
	return (0);
}
