#include "main.h"
/**
 * _strcmp - Checker
 *
 *@s1: A string
 *
 * @s2: Another string
 *
 * Return: Result of string´s comparation
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);

		s1++, s2++;
	}
	return (*s1 - *s2);
}
