#include "main.h"
/**
 *print_binary - function that prints the binary representation of a number
 *@n: the number to print
 */
void print_binary(unsigned long int n)
{
	unsigned int x = 0, max = 32768;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max)
	{
		if (x == 1 && (n & max) == 0)
			_putchar('0');
		else if ((n & max) != 0)
		{
			_putchar('1');
			x = 1;
		}
		max >>= 1;
	}
}
