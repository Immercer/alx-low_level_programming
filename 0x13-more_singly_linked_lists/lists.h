#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * struct listint_s - singly linked list
 * @n: n is an integer
 * next: pointer to next node
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);

#endif
