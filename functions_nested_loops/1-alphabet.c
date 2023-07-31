#include "main.h"
/**
 * print_alphabet - prints the alphabet
 */
void print_alphabet(void)
{

	char x;
/*
 * With a for structure increase 'x' each time, to print alphabet, use 
 * the _putchar function to print a single chatacter.
 */
	for (x = 'a'; x <= 'z'; x++)
		_putchar(x);
	_putchar('\n');
}
