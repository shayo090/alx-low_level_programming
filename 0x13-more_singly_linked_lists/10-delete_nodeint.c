#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at index of a list
 *
 * @head: pointer to the beginning of the list
 *
 * @index: position of node to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *d_node;
	unsigned int i = 1;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = d_node->next;
		free(d_node);
		return (1);
	}
	else
	{
		while (i < index)
		{
			temp = temp->next;
			if (temp == NULL)
				return (-1);
			i++;
		}
		d_node = temp;
		d_node = d_node->next;
		temp->next = d_node->next;
		free(d_node);
	}
	return (1);
}
