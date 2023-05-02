#include <stdlib.h>
#include <stddef.h>
#include <stddef.h>
#include "list.h"

/**
 * print_listint -prints all the elements of the listint_t list
 * @h: target list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t num_elem = 0;

	while (current_node != NULL)
	{
		printf("%d\n", h->n);
		num_elem++;
		h = h->next;
	}
	return (num_elem);
}

