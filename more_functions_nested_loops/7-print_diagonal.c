#include "main.h"
/**
 * print_diagonal - Checker
 *
 * @n: Parameter to check
 *
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int a = 0, b;

	if (n > 0)
	{
		for (; a < n; a++)
		{
			for (b = 0; b < a; b++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
