#include "main.h"
/**
 * puts2 - Checker
 *
 *@str: Parameter to check
 *
 */
void puts2(char *str)
{
	int x = 0, len = 0;

	while (str[len] != '\0')
		len++;

	len -= 1;
	for (; x <= len; x += 2)
		_putchar(str[x]);
	_putchar('\n');
}
