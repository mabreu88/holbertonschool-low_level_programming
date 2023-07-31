#include "main.h"
/**
 *clear_bit - function that sets the value of a bit to 0 at a given index
 *@n: The number to set
 *@index: The index to set
 *Return: 1 sucess, -1 error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max = ~(max << index);
	if (max == 0x00)
		return (-1);
	*n &= max;
	return (1);
}
