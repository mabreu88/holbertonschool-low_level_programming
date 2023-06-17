#include "main.h"

/**
 * print_sign - Checker
 *
 * @n: Parameter to check
 *
 * Return: 1 if n is greather than zero, 0 is 0 and -1 is less than zero
 */

int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		x = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		x = 0;
		_putchar('0');
	}
	else
	{
		x = -1;
		_putchar('-');
	}
	return (x);
}
