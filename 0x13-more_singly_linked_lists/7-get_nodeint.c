#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a list
 *
 * @head : pointer to the list
 *
 * @index : index
 *
 * Return: pointer to the indexed node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;
	while (i < index)
	{
		if (temp == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
		i++;
	}

	return (temp);
}
