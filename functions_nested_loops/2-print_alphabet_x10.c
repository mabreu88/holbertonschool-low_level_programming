#include "main.h"
/**
 * print_alphabet_x10 - printd the aplphabet
 *
 */

void print_alphabet_x10(void)
{
	char x;
	int count;
/*
 * Generate two diferents for structures. The first is used as a counter,
 * each time it is incremented, the second for is executed which prints
 * the entire alphabet ending with a line break.
 */
	for (count = 0; count <= 9; count++)
	{

	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
	}
}
