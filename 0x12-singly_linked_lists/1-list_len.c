#include "list.h"

/**
* list_len - function that returns the length of a list
*
* @h : the list
*
* Return: the length of the list
*/

size_t list_len(const list_t *h)
{
	size_t i;
	i = 0;
	
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}
