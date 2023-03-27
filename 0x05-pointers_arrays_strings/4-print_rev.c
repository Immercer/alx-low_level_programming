#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 * print_rev - prints a string in reverse
 * @s: poniter to string variables
 */

int _strlen(char *s)
{	
	int i = 0;
	int c = 0;
	while (s[i] != '\0')
	{
		c++;
		i++;
	}
	return c;
}

void print_rev(char *s)
{
	int len, counter;

	len = _strlen(s);
	counter = len;
	while (counter >= 0)
	{
		_putchar(s[counter]);
		counter--;
	}
	_putchar(10);
}

int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
