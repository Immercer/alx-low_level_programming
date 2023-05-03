#include "lists.h"

/**
 * get_nodeint_at_index - return the nth node of listint_t
 * @head: head
 * @index: index
 * Return: node at index n
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int current_idx = 0;
	listint_t *current_node = head;

	if (head == NULL)
		return (NULL);
	while (current_node != NULL && current_idx != (int)index)
	{
		current_idx++;
		current_node = current_node->next;
	}
	if (current_node == NULL && index > current_idx)
		return (NULL);
	return (current_node);
}
