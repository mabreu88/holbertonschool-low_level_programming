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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
