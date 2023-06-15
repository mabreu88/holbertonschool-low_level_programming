#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * With the for structure, and the variable char we start counting from the
 * * low 'a' and increment with ++ until we reach 'z'
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char low;

	for (low = 97; low <= 122; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
