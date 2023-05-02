#include <stdlib.h>
#include <stddef.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_listint -prints all the elements of the listint_t list
 * @h: target list
 * Return: number of elements
 */
size_t print_listint(const listint_t *h)
{
	size_t num_elem = 0;
	const listint_t *current_node = h;
	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		num_elem++;
		current_node = current_node->next;
	}
	return (num_elem);
}

