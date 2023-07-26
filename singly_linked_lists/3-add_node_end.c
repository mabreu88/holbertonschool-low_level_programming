#include "lists.h"
/**
 *add_node_end - Function to add node at the end of list
 *@head: Pointer to a pointer that point the head of list
 *@str: pointer to string
 *Return: pointer to new list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	unsigned int length = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	while (str[length])
		length++;

	new_node->len = length;
	new_node->str = strdup(str);

	if (*head != NULL)
	{
		new_node->next = NULL;
		tmp = *head;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = new_node;
	}
	else
	{
		new_node->next = *head;
		*head = new_node;
	}
	return (new_node);
}
