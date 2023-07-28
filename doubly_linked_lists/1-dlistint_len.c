#include "lists.h"
/**
 *dlistint_len - function that returns the number of elements in a linked
 *dlistint_t list.
 *@h: Head of the list
 *Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp)
	{
		tmp = tmp->next;
		nodes++;
	}
	return (nodes);
}
