#include "lists.h"
/**
 *add_dnodeint_end - function that adds a new node at the end of a
 *dlistint_t list.
 *@head: Pointer to head of the list
 *@n: The data to add on the new node
 *Return: new_node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
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
		while (tmp->next)
			tmp = tmp->next;
		new_node->prev = tmp;
		tmp->next = new_node;
		return (new_node);
	}
	return (NULL);
}
