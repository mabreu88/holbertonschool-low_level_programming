#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 *
 * if else to determinate if the number is negative or positive
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
/*
 * Initialize the random number generator with a seed based on the current time
 */
	srand(time(0));
/*
 * Generate a random number in the range of -RAND_MAX/2 to RAND_MAX/2
 */
	n = rand() - RAND_MAX / 2;
/*
 * Check if the number is positive
 */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
/*
 * Check if the number is zero
 */
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
/*
 * If the number is not positive or zero, it must be negative
 */
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
