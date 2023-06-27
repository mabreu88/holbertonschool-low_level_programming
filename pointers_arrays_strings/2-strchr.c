#include "main.h"
/**
 * _strchr - Checker
 *
 * @s: A string
 *
 * @c: Target
 *
 * Return: pointer or NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return ('\0');
}
