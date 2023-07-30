#include "main.h"
/**
 *print_binary - function that prints the binary representation of a number
 *@n: the number to print
 */
void print_binary(unsigned long int n)
{
	signed long int max = sizeof(n) * 8 - 1;
	unsigned int x = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (max >= 0)
	{
	x = ((n >> max) & 1) ? 1 : (x ? _putchar('0') : 0);
		_putchar(((n >> max) & 1) ? '1' : 0);
		max--;
	}
}
