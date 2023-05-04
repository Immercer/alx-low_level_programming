#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at specific index
 * @head: head/ start of node
 * @index: target index to delete from
 * Return: 1 or -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = *head;
	listint_t *tmp;

	if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		return (1);
	}

	while (current != NULL && i != index - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	tmp = current->next;
	current->next = tmp->next;
	free(tmp);

	return (1);
}
