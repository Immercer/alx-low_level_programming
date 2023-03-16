#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always return 0
 */
int main(void)
{
	int type_int;
	char type_char;
	long int type_long_int;
	long long int type_long_long_int;
	float type_float;

	printf("Size of a char: %d bytes(s)\n", sizeof(type_char));
	printf("Size of an int: %d bytes(s)\n", sizeof(type_int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(type_long_int));
	printf("Size of a long long int: %d bytes(s)\n", sizeof(type_long_long_int));
	printf("Size of a float: %d bytes(s)\n", sizeof(type_float));
	return (0);
}
