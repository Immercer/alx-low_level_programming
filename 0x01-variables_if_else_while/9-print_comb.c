#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int ch;

	for (ch = 10 ; ch <= 19; ch++)
	{
		putchar((ch % 10) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar(10);
}
