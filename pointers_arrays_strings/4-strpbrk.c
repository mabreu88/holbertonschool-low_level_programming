#include "main.h"
/**
 * _strpbrk - Checker
 *
 *@s: A string
 *
 *@accept: A input character for locate into string s
 *
 * Return: Returns a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *start = accept;

	while (*s)
	{
		while (*accept)
	{
		if (*accept == *s)
			return (s);
		accept++;
	}
	accept = start;
	s++;
	}
	return ('\0');
}
