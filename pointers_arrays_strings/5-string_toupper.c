#include "main.h"
/**
 * string_toupper - checker
 *
 *@s: A string
 *
 * Return: string in uppercase
 */
char *string_toupper(char *s)
{
	char *x = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (x);
}
