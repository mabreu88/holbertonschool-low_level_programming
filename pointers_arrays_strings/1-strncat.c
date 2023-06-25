#include "main.h"
/**
 * _strncat - checker
 *
 *@dest: A string
 *
 * @src: Another string
 *
 * @n: A interger
 *
 * Return: Return a pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int x = 0, y = 0;
	char *a = dest, *b = src;

	while (*src)
	{
		x++;
		src++;
	}

	while (*dest)
	{
		dest++;
	}

	if (n > x)
		n = x;

	src = b;

	for (; y < n; y++)
		*dest++ = *src++;

	*dest = '\0';
	return (a);
}
