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
 * Calculate the last digit of the random number using the modulo operator
 * A trick of the int is that when dividing it, it never gives a number with
 * decimals, it always gives an integer. So using base 10 we will always get
 * the digit we are looking for.
 */
	if (n % 10 > 5)
/*
 * Check if the last digit is greater than 5
 */
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	else if (n % 10 == 0)
/*
 * Check if the last digit is equal to 0
 */
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	else
/*
 * If the last digit is neither greater than 5 nor 0, it must be
 * less than 6 but not 0
 */
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	return (0);
}
