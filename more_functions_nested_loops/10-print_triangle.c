#include "main.h"
/**
 * print_triangle -  Checker
 *
 * @size: Parameter to check
 *
 * Return: Always 0
 */
void print_triangle(int size)
{
	int a = 0, b, n = size - 1;

	if (size > 0)
	{
		for (; a < size; a++)
		{
			for (b = 0; b < size; b++)
			{
				if (b < n)
					_putchar(' ');
				else
					_putchar('#');
			}
			n--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
