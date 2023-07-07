#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - Function that allocates memory using malloc.
 *@b: A pointer
 *Return: A pointer to the allocated memory, 98 if pointer is NULL
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}
