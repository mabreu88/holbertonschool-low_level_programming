#include "main.h"
/**
 * _strcpy - Checker
 *
 *@dest: Initial parameter
 *
 *@src: Second parameter
 *
 * Return: dest value
 */
char *_strcpy(char *dest, char *src)
{
	char *x = dest;

	while (*src)
		*dest++ = *src++;
	return (x);
}
