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
	while (*haystack)
	{
		char *i = haystack;
		char *j = needle;

		while (*j && (*i == *j))
		{
			++i;
			++j;
		}
		if (*j == '\0')
			return (haystack);
		++haystack;
	}
	return ('\0');
}
