#include "lists.h"

/**
* print_list - Prints all elements of a list
*
* @h: A linked list
*
* Return: The number of nodes
*/

size_t list_len(const list_t *h)
{
	size_t count = 0;

	h = 0;
	while (h != '\0')
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		count++;
	}
	return (count);
}
