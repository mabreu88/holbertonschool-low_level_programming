#include "main.h"
#include <stdlib.h>
/**
 *string_nconcat - Function that concatenates two strings.
 *@s1: First string
 *@s2: Second string
 *@n: X bytes to s2 to concatenate of s1
 *Return: Concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *xstr;
	unsigned int a = 0, b = 0, c = 0;

	if (s1 == NULL)
		s1 = "";
	while (s1[b])
		b++;
	if (s2 == NULL)
		s2 = "";
	while (s2[c])
		c++;
	if (n >= c)
		n = c;
	xstr = malloc(b + n + 1);
	if (xstr == NULL)
		return (NULL);
	for (; a < (b + n); a++)
	{
		if (a < b)
			xstr[a] = *s1, *s1++;
		else
			xstr[a] = *s2, *s2++;
	}
	xstr[a] = '\0';
	return (xstr);
}
