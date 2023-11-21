#include "lists.h"
#include <stdio.h>

/**
 * print_listint - name of function to print elements
 * @h: Pointer to the list
 *
 * Return:Number of nodes in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (nodes);
}
