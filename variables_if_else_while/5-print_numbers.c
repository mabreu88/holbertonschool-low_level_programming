#include<stdio.h>
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
	int x;

	for (x = 0; x < 10; x++)
		printf("%i", x);
	printf("\n");
return (0);
}
