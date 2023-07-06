#include "main.h"
#include <stdlib.h>
/**
 *char *str_concat - function that concatenates two strings
 *@s1: First string
 *@s2: Second string
 *Return: A pointer to concatenated strings, NULL if the strings are nulls
 */
char *str_concat(char *s1, char *s2)
{
	char *a, *b, *c;
	int x = 0, y = 0, z = 0;

	b = s1;
	c = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		y++;
		s1++;
	}
	s1 = b;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		z++;
		s2++;
	}
	s2 = c;
	a = malloc(sizeof(char) * (y + z + 1));
	b = a;
	if (a == NULL)
		return (NULL);
	for (; x < (y + z); x++)
	{
		if (x < y)
		{
			a[x] = *s1;
			s1++;
		}
		else
		{
			a[x] = *s2;
			s2++;
		}
	}
	a[x] = '\0';
	return (b);
}
