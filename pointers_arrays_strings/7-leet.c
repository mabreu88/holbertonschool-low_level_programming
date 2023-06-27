#include "main.h"
/**
 * leet - Checker
 *
 *@b: A string
 *
 * Return: r
 */
char *leet(char *b)
{
	char *r = b;
	char a[] = { 'a', 'e', 'o', 't', 'l' };
	char n[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*b)
	{
		for (i = 0; i < 5; i++)
		{
			if (*b	== a[i] || *b == a[i] - 32)
				*b = n[i] + '0';
		}
		b++;
	}
	return (r);
}
