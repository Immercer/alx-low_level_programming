#include <stdio.h>
#include "main.h"
/**
* swap_int - swaps pointer values
* @a: pointer to a
* @b: pointer to b
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
