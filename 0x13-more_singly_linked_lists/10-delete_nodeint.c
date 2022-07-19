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

	unsigned int i = 1;
	listint_t *new = *head, *temp;

	if (!head || !*head)
		return (-1);

	if (i == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	temp = *head;
	while (temp)
	{
		if (i == index)
		{
			new = temp->next;
			temp->next = new->next;
			free(new);
			return (1);
		}

		temp = temp->next;
		i++;
	}

	return (-1);
}