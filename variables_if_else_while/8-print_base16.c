#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char low;
	int x;
/*
 * Generate two diferents for structures, one for print all base 10 numbers
 * 0 to 9, and other to print letter form 'a' to 'f'.
 */
	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (low = 97; low <= 102; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
