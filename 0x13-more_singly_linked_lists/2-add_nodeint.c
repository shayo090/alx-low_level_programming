#include "lists.h"

/**
 * add_nodeint - function that adds a node at the beginning of a list
 *
 * @head : pointer to the pointer to the list
 *
 * @n : data
 *
 * Return: pointer to the added node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	if (!head)
		return (0);

	temp = malloc(sizeof(listint_t));

	if (!temp)
		return (0);

	temp->n = n;
	temp->next = *head;

	*head = temp;

	return (temp);
}
