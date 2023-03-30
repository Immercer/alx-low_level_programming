#include <stdio.h>
#include "main.h"
/**
 * reverse_array - reverse array
 * @a: source
 * @n: lenght of array
 */
void reverse_array(int *a, int n)
{
	int tmp = 0;
	int j = n - 1;
	int i = 0;

	while (i < j)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
		i++;
	j--;
	}
}
