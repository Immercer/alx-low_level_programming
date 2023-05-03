#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of listint_t
 * @head: head
 * index: index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int current_idx = 0;
	listint_t *current_node = head;

	if (head == NULL)
		return (NULL);
	while (current_node->next != NULL || current_idx != index)
	{
		if (current_idx == (int)index)
			return current_node;
		current_idx++;
		current_node = current_node->next;
	}
	if (index > current_idx)
		return (NULL);
}
