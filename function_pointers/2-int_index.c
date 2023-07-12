#include "function_pointers.h"
/**
 *int_index - Function that searches for an integer.
 *@array: Pointer to an array
 *@size: Size of the array
 *@cmp: Pointer to function cmp
 *Return: the index of the first element for which the cmp function does
 *not return 0 If no element matches, return -1 If size <= 0, return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x = 0;

	if (cmp == NULL || array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (; x < size; x++)
		if (cmp(array[x]))
			return (x);
	if (x == size)
		return (-1);
	return (-1);
}
