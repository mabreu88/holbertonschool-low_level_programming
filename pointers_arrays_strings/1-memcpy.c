#include "main.h"
/**
 * _memcpy - Checker
 *
 * @src: A string
 *
 * @dest: Another string
 *
 * @n: An interger
 *
 * Return: x
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *x = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (x);
}
