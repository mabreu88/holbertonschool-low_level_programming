#include "main.h"
/**
 * _strncpy - Checker
 *
 *@dest: A string
 *
 *@src: Another string
 *
 * @n: An integer
 *
 * Return: A pointer to resulting string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x = 0, y = 0;
	char *a = dest, *b = src;

	while (*src)
	{
		x++;
		src++;
	}
	x++;
	if (n > x)
		n = x;

	src = b;

	for (; y < n; y++)
		*dest++ = *src++;
	return (a);
}
