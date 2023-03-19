#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int var_num;
	int const_num;

	for (var_num = 48; var_num <= 57; var_num++)
	{
		for (const_num = 48; const_num <= 57; const_num++)
		{
			putchar(var_num);
			putchar(const_num);
			putchar(44);
		}
	}
	putchar(10);
	return (0);
}
