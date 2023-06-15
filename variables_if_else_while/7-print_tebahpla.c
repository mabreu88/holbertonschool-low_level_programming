#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char high;

	for (high = 122; high >= 97; high--)
		putchar(high);
	putchar('\n');
	return (0);
}
