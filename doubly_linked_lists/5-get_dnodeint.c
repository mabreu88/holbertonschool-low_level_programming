#include "lists.h"
/**
 *get_dnodeint_at_index - function that returns the nth node of a
 *dlistint_t linked list
 *@head: pointer to list
 *@index: the index of the node
 *Return: A pointer to the node, NULL if dont exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x = 0;

	while (head)
	{
		if (x++ == index)
			break;
		head = head->next;
	}
	return (head);
}
