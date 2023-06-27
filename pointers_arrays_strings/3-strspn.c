#include "main.h"
/**
 * _strspn - Checker
 *
 *@s: A string
 *
 *@accept: A char
 *
 * Return: Returns the number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	int cont = 0, check;
	char *go = accept;

	while (*s)
	{
		check = 0;
		while (*go)
		{
			if (*go == *s)
			{

				cont++;
				check = 1;
				break;
			}
			go++;
		}
		accept = go;
		s++;
		if (check == 0)
			break;
	}
	return (cont);
}
