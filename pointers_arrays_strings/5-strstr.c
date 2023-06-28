#include "main.h"
/**
 * _strstr - Checker
 *
 *@haystack: A string
 *
 *@needle: A string to locate ino haystack
 *
 * Return: Returns a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *starta = needle, *startb = haystack;

	while (*haystack)
	{
		startb = haystack;
		needle = starta;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = startb + 1;
	}
	return ('\0');
}
