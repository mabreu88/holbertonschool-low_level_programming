#include "main.h"
/**
 *print_binary - function that prints the binary representation of a number
 *@n: the number to print
 */
void print_binary(unsigned long int n)
{
	unsigned long int max, flag = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	max = 1UL << (sizeof(n) * 8 - 1);

	while (max)
	{
		if (flag == 1 && (n & max) == 0)
			_putchar('0');
		else if ((n & max) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		max >>= 1;
	}
}
