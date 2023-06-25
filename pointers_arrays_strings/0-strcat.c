#include "main.h"
/**
 * _strcat - Checker
 *
 *@dest: A string
 *
 *@src: Another string
 *
 * Return: Returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *x = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (x);
}
