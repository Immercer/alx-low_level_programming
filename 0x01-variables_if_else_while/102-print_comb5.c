#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = i; k <= 9; k++)
			{
				for (l = j; l <= 9; l++)
				{
					putchar('0' + i);
					putchar('0' + j);
					putchar(' ');
					putchar('0' + k);
					putchar('0' + l);
					if (i != 9 || j != 8 || k != 9 || l != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	return (0);
}

