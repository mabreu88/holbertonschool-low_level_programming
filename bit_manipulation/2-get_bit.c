#include "main.h"
/**
 *get_bit - function that returns the value of a bit at a given index
 *@n: The number to get bit
 *@index: The index where find the bit
 *Return: the value of bit, -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;
	if (max == 0)
		return (-1);
	if ((n & max))
		return (1);
	else
		return (0);

}
