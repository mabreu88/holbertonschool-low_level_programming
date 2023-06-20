#include "main.h"
#include <stdio.h>
/**
 * main - Entry piont
 *
 * Return: Always 0
 */
int main(void)
{
	int x = 1;

	for (; x < 100 ; x++)
	{
		if (x % 3 == 0 && x % 5 == 0)
			printf("FizzBuzz ");
		else if (x % 3 == 0)
			printf("Fizz ");
		else if (x % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", x);
	}
	printf("Buzz\n");
	return (0);
}
