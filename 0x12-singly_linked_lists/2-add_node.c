#include "lists.h"

/**
* add_node - function that adds a node to the top of a list
*
* @head : the pointer to a pointer to a list
*
* @str : the string the new node contains
*
* Return: pointer to the new node
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;

	if (!head)
		return (0);
	temp = malloc(sizeof(list_t));
	if (!temp)
	{
		return (0);
	}

	temp->str = strdup(str);
	temp->len = strlen(str);
	temp->next = *head;
	*head = temp;
	return (temp);
}
