#include "main.h"
/**
 * print_rev - Checker
 *
 *@s: Parameter to check
 *
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		_putchar(s[--len]);
	_putchar('\n');
}
