#include "main.h"
#include <stdlib.h>
/**
 *_calloc - Function that allocates memory for an array, using malloc.
 *@nmemb: n Bytes of memory
 *@size: Size of nmemb
 *Return: Returns a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x = 0;
	char *y;

	if (nmemb == 0 || size == 0)
		return (NULL);
	y = malloc(nmemb * size);
	if (y == NULL)
		return (NULL);
	for (; x < nmemb * size; x++)
		*(y + x) = 0;
	return (y);
}
