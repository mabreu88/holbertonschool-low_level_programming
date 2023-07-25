#include "lists.h"
/**
 *add_node - Function to add node at the head
 *@head: Pointer to a list_t pointer to points the head
 *@str: Pointer to string
 *Return: Pointer to new head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int length = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);

	while (str[length])
		length++;
/*
 * To obtain the str length and store in "length"
 */

	tmp->len = length;
	tmp->str = strdup(str);
	tmp->next = *head;
	*head = tmp;
/*
 * Assign the length of the string to the 'len' field of the node.
 * Assign a copy of the string 'str' to the 'str' field of the node using the
 * strdup function of lib <string.h>
 * Set the 'next' pointer of the new node to point to the current first node.
 * he pointer to the first node (head) is updated to point to the newly
 * added node.
 */
	return (tmp);
}
