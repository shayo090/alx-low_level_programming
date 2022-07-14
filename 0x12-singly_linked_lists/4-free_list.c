#include "lists.h"

/**
 * free_list - a function that frees a list_t list
 *
 * @head- the pointer to the first node of the link
 *
 * Return
 */

void free_list(list_t *head)
{
	list_t *temp;
	
	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
	free(head);
}
