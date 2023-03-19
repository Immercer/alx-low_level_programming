#include <stdio.h>
/**
 * main- entry point
 * Return: Always 0
 */
int main(void)
{
	int alphabet = 122;

	while (alphabet >= 97)
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar(10);
	return (0);
}
