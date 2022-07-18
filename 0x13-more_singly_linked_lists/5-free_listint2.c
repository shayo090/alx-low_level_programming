#include "lists.h"

/**
 * free_listint2 - function that frees lists
 *
 * @head : pointer to the pointer of a list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head)
	{
		while (*head)
		{
			temp = *head;
			*head = temp->next;
			free(temp);
		}

		free(*head);
	}
	head = NULL;
}
