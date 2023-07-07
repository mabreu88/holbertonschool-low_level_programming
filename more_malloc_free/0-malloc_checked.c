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
/*
 * We assign to x the amount of memory equal to the value of b
 */
	x = malloc(b);
	if (x == NULL)
/*
 * If x is null we leave with 98
 */
		exit(98);
	return (x);
}
