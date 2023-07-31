#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int x;
/*
 * With for structure increase x each time to print all numbers of base 10
 * form 0 to 9
 */
	for (x = '0'; x <= '9'; x++)
	putchar(x);
putchar('\n');
return (0);
}
