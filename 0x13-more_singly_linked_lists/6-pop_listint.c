#include "lists.h"

/**
 * pop_listint - function that deletes the firt node of a list
 *
 * @head : pointer to the pointer to the list
 *
 * Return: the head node data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp;

	if (!head || !(*head))
	{
		return (0);
	}

	temp = *head;
	data = temp->n;
	*head = temp->next;
	free(temp);

	return (data);
}
