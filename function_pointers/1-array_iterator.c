#include "function_pointers.h"
/**
 *array_iterator - Function that executes a function given as
 * a parameter on each element of an array.
 *@array: Pointer to an array
 *@size: Size of array
 *@action: Pointer to function action
 *Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x = 0;

	if (action == NULL || array == NULL)
		return;
	for (; x < size; x++)
		action(array[x]);
}
