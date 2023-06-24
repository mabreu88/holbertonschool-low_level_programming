#include "main.h"
/**
 * _atoi - Checker
 *
 *@s: Parameter to check
 *
 * Return:If there are no numbers in the string, the function must return 0
 */
int _atoi(char *s)
{
	int x = 1;
	unsigned int y = 0;

	do {
		if (*s == '-')
			x *= -1;

		else if (*s >= '0' && *s <= '9')
			y = (y * 10) + (*s - '0');

		else if (y > 0)
			break;
	} while (*s++);

	return (y * x);
}
