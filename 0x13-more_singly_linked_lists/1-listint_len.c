#include "lists.h"

/**
 * listint_len - function that returns the number of elements in a list
 *
 * @h : pointer to the list
 *
 * Return: length of list
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	if (!h)
		return (0);
	nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
