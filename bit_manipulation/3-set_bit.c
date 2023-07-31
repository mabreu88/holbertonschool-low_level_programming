#include "main.h"
/**
 *set_bit - function that sets the value of a bit to 1 at a given index
 *@n: Number to set bit
 *@index: The index to set bit
 *Return: 1 if work, -1 error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;

	if (max == 0)
		return (-1);
	*n |= max;
	return (1);
}
