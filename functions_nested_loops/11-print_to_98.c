#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Checker
 * @n: Variable
 */
void print_to_98(int n)
{
	int x;

	if (n <= 98)
		for (x = n; x < 98; x++)
			printf("%d, ", x);
	else
		for (x = n; x > 98; x--)
			printf("%d, ", x);
	printf("98\n");
}
