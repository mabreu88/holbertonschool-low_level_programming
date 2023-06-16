#include "main.h"
/**
 * print_alphabet_x10 - printd the aplphabet
 *
 */

void print_alphabet_x10(void)
{
	char x;
	int count;

	for (count = 0; count <= 9; count++)
	{

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
	}
}
