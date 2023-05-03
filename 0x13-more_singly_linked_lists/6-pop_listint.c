#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t
 * @head: head
 * Return: head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int val;

	if (*head == NULL)
		return (0);
	tmp = *head;
	val = tmp->n;
	*head = tmp->next; 
	free(tmp);
	
	return val;
}
