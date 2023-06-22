#include "main.h"
/**
 * _puts - Checker
 *
 *@str: Parameter to check
 */
void _puts(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;

	}
	_putchar('\n');
}
