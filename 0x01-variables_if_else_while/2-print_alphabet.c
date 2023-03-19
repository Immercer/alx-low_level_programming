#include <stdio.h>
/**
 * main - Entry Point
 * Return: alphabets in lowercase
 */
int main(void)
{
	int alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	};
	putchar(10);
	return (0);
}
