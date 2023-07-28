#include "lists.h"
/**
 *add_dnodeint - function that adds a new node at the beginning of a dlistint_t
 *@head: Head of the list
 *@n: The data to add on the new node
 *Return: new_node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = NULL, *tmp = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;

	if (!head || !(*head))
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		tmp = *head;
		tmp->prev = new_node;
		*head = new_node;
		new_node->next = tmp;
		return (new_node);
	}
	return (NULL);
}
