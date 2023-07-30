#include "lists.h"
/**
 *delete_dnodeint_at_index - function that deletes the node at index
 *index of a dlistint_t linked list.
 *@head: Pointer to head
 *@index: The index to delete node
 *Return: 1 succes, 2 failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	unsigned int x = 0;

	if (!head || !(*head))
	{
		return (-1);
	}
	else
	{
		tmp = *head;
		while (index != x++ && tmp)
			tmp = tmp->next;
		if (!tmp)
			return (-1);
		if (tmp->next)
			tmp->next->prev = tmp->prev;
		if (index == 0)
			*head = tmp->next;
		else
			tmp->prev->next = tmp->next;
		free(tmp);
		return (1);
	}
	return (-1);
}
