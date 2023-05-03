#include "lists.h"

/**
 * sum_listint - sums data in all node
 * @head: head
 * Return: sum of data in node
 */
int sum_listint(listint_t *head)
{
	int sum_of_value = 0;
	listint_t *current_node = head;

	if (current_node == NULL)
		return (0);
	while (current_node != NULL)
	{
		sum_of_value += current_node->n;
		current_node = current_node->next;
	}
	return (sum_of_value);
}
