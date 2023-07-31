#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x;
/*
 * Use for structure to print al base 10 digits form 0 to 9.
 */
	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
/*
 * Each time, if the number is different to 9 print ',' an ' '
 */
		if (x != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
