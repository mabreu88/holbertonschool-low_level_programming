#include "lists.h"
/**
 *list_len - Function to get numbers of nodes in a list
 *@h: Head of list
 *Return: Amount of elements in a list
 */
size_t list_len(const list_t *h)
{
	unsigned int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
