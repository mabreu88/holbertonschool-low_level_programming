#include "lists.h"
/**
 *insert_dnodeint_at_index - function that inserts a new node at a given
 *position
 *@h: Pointer to head
 *@idx: The index to insert a new node
 *@n: The data of the new node
 *Return: Pointer to new element or NULL is fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = NULL, *tmp = NULL;
	unsigned int x = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->next = NULL;
	new_node->prev = NULL;
	new_node->n = n;
	if (!h || !(*h))
		*h = new_node;
	else
	{
		tmp = *h;
		while (idx != x++ && tmp->next)
			tmp = tmp->next;
		if (tmp->next)
			new_node->prev = tmp->prev;
		else
			new_node->prev = tmp;
		if (idx == x)
			tmp->next = new_node, new_node->prev = tmp;
		else if (idx == x - 1)
		{
			if (tmp->prev)
				tmp->prev->next = new_node;
			else
				*h = new_node;
			tmp->prev = new_node;
			new_node->next = tmp;
		}
		else
		{
			free(new_node);
			return (NULL);
		}
	}
	return (new_node);
}
