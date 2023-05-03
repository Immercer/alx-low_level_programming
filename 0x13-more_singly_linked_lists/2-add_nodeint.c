#include "lists.h"

/**
 * add_nodeint - Adds a new node to the beginning of a listint_t
 * @head: head node
 * @n: value in head
 * Return: newly added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);

}
