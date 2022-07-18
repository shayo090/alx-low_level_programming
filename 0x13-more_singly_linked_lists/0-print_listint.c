#include "lists.h"

/**
 * print_listint - function that prints all the elements in a list
 *
 * @h : the list
 *
 * Return: the number of nodes printed
 */

size_t print_listint(const listint_t *h)
{
	size_t no_nodes;

	if (h == NULL)
		return (0);

	no_nodes = 0;
	while (h)
	{
		printf("%d\n", h->n);
		no_nodes++;
		h = h->next;
	}

	return (no_nodes);
}
