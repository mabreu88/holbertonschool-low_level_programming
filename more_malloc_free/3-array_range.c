#include "main.h"
#include <stdlib.h>
/**
 *array_range - Function that creates an array of integers.
 *@min: Min number
 *@max: Max number
 *Return: Pointer
 */
int *array_range(int min, int max)
{
	int *xar;
	int x, y;
/*
 * Check if min is greater than max
 */
	if (min > max)
		return (NULL);
/*
 * Calculates the difference between max and min and
 * stores it in the x variable.
 */
	x = max - min;
/*
 * We allocate the amount of memory to contain x, +1 for the null
 */
	xar = malloc((x + 1) * sizeof(int));
	if (xar == NULL)
		return (NULL);
/*
 * We have the value of x, while in xar[y] we equal it to min and increment
 *  it by 1 at each turn of the for, until we add up the value of x
 *  to get all the necessary values.
 */
	for (y = 0; y <= x; y++)
		xar[y] = min++;
	return (xar);
}
