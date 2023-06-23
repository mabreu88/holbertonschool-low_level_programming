#include "main.h"
/**
 * puts_half - Checker
 *
 *@str: Parameter to check
 *
 */
void puts_half(char *str)
{
	int len = 0, x = 0, y = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		x = len / 2;
	else
		x = ((len + 1) / 2);

	for (y = x; y < len; y++)
		_putchar(str[y]);
	_putchar('\n');
}
