#include "lists.h"

/**
 * listint_len - Returns the number of elements in a listint_t
 * @h: target
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t num_elems = 0;
	const listint_t *current_node = h;

	while (current_node != NULL)
	{
		num_elems++;
		current_node = current_node->next;
	}
	return (num_elems);
}
