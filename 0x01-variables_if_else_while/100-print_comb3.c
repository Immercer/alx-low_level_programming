#include <stdio.h>
/**
 *
 *
 */
int main(void)
{
	int f_num;
	int s_num;
	for (f_num = '0'; f_num <= '9'; f_num++)
	{
		for (s_num = '0'; s_num <= '9'; s_num++)
		{
			putchar(f_num);
			putchar(s_num);
			if ((f_num != '9') && (s_num != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar(10);
	return (0);
}
