#include "lists.h"

/**
 * sum_listint - a functions that returns the sm of all the data in a list
 *
 * @head : pointer to the first node
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int *temp;
	int sum = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
