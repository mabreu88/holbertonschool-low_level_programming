#include<stdio.h>
/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("Size of a char: %zu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of a int: %zu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of a long int: %zu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of a long long int: %zu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of a float: %zu byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
