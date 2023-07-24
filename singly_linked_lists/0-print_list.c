#include "lists.h"
/**
 *print_list - Function to print single linked list
 *@h: Pinter to head list
 *Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int nodecount = 0;
/*
 * unsigned int to count nodes
 */
	while (h)
	{
		printf("[%u] ", h->len);
/*
 * We use square brackets "[ ]" to format the output with the length of
 *  the example list string [8].
 */
		if (h->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		nodecount++;
	}
	return (nodecount);
}
