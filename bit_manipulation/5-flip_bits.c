#include "main.h"
/**
 *flip_bits - function that returns the number of bits you would need to
 *flip to get from one number to another.
 *@n: Quantity of flips needes to equal m for n
 *@m: Other to set equal
 *Return: The number of bits fliped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flips = 0;
	unsigned long int xor = (n ^ m);
	unsigned long int max = 0x01;
	int num = sizeof(unsigned long int) * 8;

	while (num--)
	{
		if (max & xor)
			flips++;
		max <<= 1;
	}
	return (flips);
}
