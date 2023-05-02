#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint -prints all the elements of the listint_t list
 * @h: target list
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t num_elem = 0;
	const listint_t current_node = h;

	if (current_node == NULL)
		return (num_elem);
	while (current_node != NULL)
	{
		printf("%d\n", current_node->n);
		num_elem++;
		current_node = current_node->next;
	}
	
	return (num_elem);
}

