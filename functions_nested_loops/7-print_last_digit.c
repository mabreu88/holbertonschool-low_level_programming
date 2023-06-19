#include "main.h"
/**
 *print_last_digit - Checker
 *
 * @x: variable
 *Return: The value of the last digit
 */
int print_last_digit(int x)
{
	int r = 0;

	if (x < 0)
		r = -1 * (x % 10);
	else
		r = x % 10;
	_putchar(r);
	return (r);
}
