#include "lists.h"
/**
 *print_dlistint - a function that prints all the elements of dlistint_t list.
 *@h: Head of list
 *Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		nodes++;
	}
	return (nodes);
}
