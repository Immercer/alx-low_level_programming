#include "lists.h"

/**
 * free_listint - frees a list
 * @head: head
 */

void free_listint(listint_t *head)
{
	listint_t *current_node = NULL;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		current_node = head;
		head = head->next;
		free(current_node);
	}
}
