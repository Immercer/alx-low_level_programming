#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int alphabet = 'a';
	while (alphabet < 'z')
       	{	
		if (alphabet == 'e' || alphabet == 'q')
		{
			alphabet++;
			continue;
		}
		putchar(alphabet);
		alphabet++;	
	}
	putchar(10);
	return (0);
}
