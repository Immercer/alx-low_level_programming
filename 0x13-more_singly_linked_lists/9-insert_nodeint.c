#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at position n
 * @head: head
 * @idx: idx
 * @n: length of list
 * Return: address of new node, or null if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp_node, *new_node;
	unsigned int i = 0;

	if (head == NULL)
		return (0);
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	tmp_node = *head;
	while (tmp_node != NULL && (i < idx - 1)
	{
		tmp_node = tmp_node->next;
		i++;
	}
	if (tmp_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = tmp_node->next;
	tmp_node->next = new_node;
	return (new_node);
}
