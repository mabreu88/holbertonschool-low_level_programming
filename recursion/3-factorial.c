#include "main.h"
/**
 * factorial - Checker
 *
 *@n: A variable
 *
 * Return: the factorial of a given number.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
