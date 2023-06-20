#include "main.h"
/**
 * _isdigit - Checker.
 *
 * @c: Parameter to check.
 *
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	char a = '0';
	int b = 0;

	for (; a <= '9'; a++)
	{
		if (a == c)
		{
			b = 1;
			break;
		}
	}
	return (b);
}
