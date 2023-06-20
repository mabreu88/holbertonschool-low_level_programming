#include "main.h"
/**
 * _isupper - Checker
 * @c: Parameter to check
 * Return: 1 if c is uppercase
 */
int _isupper(int c)
{
	char a = 'A';
	int b = 0;

	for (; a <= 'Z'; a++)
	{
		if (c == a)
		{
			b = 1;
			break;
		}
	}
	return (b);
}
