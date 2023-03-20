#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int f_num;
	int s_num;

	for (f_num = 0; f_num <= 8; f_num++)
	{
		for (s_num = 1; s_num <= 9; s_num++)
		{
			putchar('0' + f_num);
			putchar('0' + s_num);
			if (f_num != 8 || s_num != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
