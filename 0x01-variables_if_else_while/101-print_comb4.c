#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int i, k, j;

	for (i = 0; i <= 7 ; i++)
		for (k = i + 1; k <= 8; k++)
			for (j = k + 1; j <= 9; j++)
			{
				putchar(i + '0');
				putchar(k + '0');
				putchar(j + '0');
				if (i != 7 || k != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
	putchar(10);
	return (0);
}
