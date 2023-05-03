#include "lists.h"

/**
 * add_nodeint_end - adds new node to the end of list
 * @head: head/first node
 * @n: value
 * Return: end node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *current_node = *head;
	listint_t *new_node = (listint_t *) malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (current_node);
}
