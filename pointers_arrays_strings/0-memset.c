#include "main.h"
/**
 * _memset - Checker
 *
 * @s: Pointer to fill
 *
 * @b: Origin
 *
 * @n: Number of bytes
 *
 * Return: x
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *x = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (x);
}
