#include "main.h"
/**
 * _strlen - Checker
 *
 * @s: Parameter to check
 *
 *Return: len
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
