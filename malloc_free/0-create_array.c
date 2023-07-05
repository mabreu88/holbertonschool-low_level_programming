#include "main.h"
#include <stdlib.h>
/**
 *create_array - Function to create an array
 *@size: The size of array
 *@c: A letter to inicialice the array
 *
 *Return: Pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *i;
	unsigned int x = 0;

	i = malloc(size * sizeof(char));

	if (i == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (x < size)
	{
		i[x] = c;
		x++;
	}
	return (i);
}
