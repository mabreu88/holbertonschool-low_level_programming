#include "main.h"
/**
 * _isalpha - Checker
 *
 * @c: Parameter to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
	char a, b;
	int x = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		for (b = 'A'; b <= 'Z'; b++)
		{
			if (c == a || c == b)
				x = 1;
		}
	}
	return (x);
}
