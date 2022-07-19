#include "lists.h"

/**
 * reverse_listint - function that reverses a list
 *
 * @head : pointer to the first node
 *
 * Return: pointer to the new list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	if (!head)
		return (0);

	prev = NULL;
	while (*head)
	{
		next = *head;
		*head = (*head)->next;
		next->next = prev;
		prev = next;
	}

	*head = prev;

	return (*head);
}
