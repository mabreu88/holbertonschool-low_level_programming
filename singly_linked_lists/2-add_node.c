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

	tmp->len = length;
	tmp->str = strdup(str);
	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
