#include "lists.h"
/**
 *sum_dlistint - function that returns the sum of all the data (n)
 *of a dlistint_t linked list.
 *@head: Pointer to list
 *Return: The sum of all elements of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
