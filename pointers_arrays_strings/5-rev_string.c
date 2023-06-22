#include "main.h"
/**
 * rev_string -Checker
 *
 *@s: Parameter to check
 *
 */
void rev_string(char *s)
{
	int len = 0, x = 0;
	char c;

	while (s[len] != '\0')
		len++;

	while (x < len--)
	{
		c = s[x];
		s[x++] = s[len];
		s[len] = c;
	}
}
